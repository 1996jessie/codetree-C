#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student {
    int p; // 선물 가격
    int s; // 배송비
};

// 정렬 기준 함수
int compare(const void* a, const void* b) {
    struct student* studentA = (struct student*)a;
    struct student* studentB = (struct student*)b;

    // 선물 가격과 배송비의 합을 기준으로 정렬
    int totalA = studentA->p + studentA->s;
    int totalB = studentB->p + studentB->s;

    return totalA - totalB; // 오름차순 정렬
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N, B;
    scanf("%d %d", &N, &B);

    struct student info[1001];

    // 학생 정보 입력
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &info[i].p, &info[i].s);
    }

    // 학생 정보를 정렬
    qsort(info, N, sizeof(info[0]), compare);

    int maxcnt = 0;

    // 각 학생에 대해 쿠폰 사용
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        int remain = B;

        // 쿠폰을 사용하여 해당 학생의 가격을 절반으로 변경
        int discountedPrice = info[i].p / 2;

        // 예산 내에서 최대 몇 명의 학생에게 선물을 줄 수 있는지 계산
        for (int j = 0; j < N; j++) {
            int currentPrice = (j == i) ? discountedPrice : info[j].p;
            int totalCost = currentPrice + info[j].s;

            // 예산이 남아 있는지 확인
            if (remain >= totalCost) {
                remain -= totalCost; // 예산에서 비용 차감
                cnt++; // 선물 가능 학생 수 증가
            } else {
                break; // 예산 초과 시 중단
            }
        }

        // 최대 학생 수 업데이트
        if (cnt > maxcnt) {
            maxcnt = cnt;
        }
    }

    // 결과 출력
    printf("%d\n", maxcnt);
    return 0;
}