#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

// 학생 구조체 정의
struct Student {
    int price;
    int shipping;
};

// 비교 함수 (qsort에 사용)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    scanf("%d %d", &n, &b);
    
    struct Student students[MAX_N];

    // 학생 정보 입력
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &students[i].price, &students[i].shipping);
    }

    int ans = 0;

    // 각 학생에 대해 쿠폰을 사용할 경우를 고려
    for (int i = 0; i < n; i++) {
        int temp[MAX_N];

        // 쿠폰을 사용할 학생
        for (int j = 0; j < n; j++) {
            if (j == i) {
                temp[j] = students[j].price / 2 + students[j].shipping; // 할인된 가격 + 배송비
            } else {
                temp[j] = students[j].price + students[j].shipping; // 원래 가격 + 배송비
            }
        }

        // 정렬하여 최저 비용부터 계산
        qsort(temp, n, sizeof(int), compare);

        int price = 0;
        int cnt = 0;

        // 예산 내에서 선물 가능 학생 수 계산
        for (int j = 0; j < n; j++) {
            if (price + temp[j] > b) {
                break; // 예산 초과 시 중단
            }
            price += temp[j];
            cnt++;
        }

        // 최대 학생 수 업데이트
        if (cnt > ans) {
            ans = cnt;
        }
    }

    // 결과 출력
    printf("%d\n", ans);
    return 0;
}