#include <stdio.h>
#include <stdbool.h>

#define MAX_N 1000

int N;
int sum[MAX_N];
int A[MAX_N];    // 복원할 수열

bool used[MAX_N + 1];  // 숫자가 사용되었는지 체크하는 배열

bool is_valid(int A1) {
    A[0] = A1;
    used[A1] = true;
    
    // 수열의 나머지 원소들을 복원
    for (int i = 1; i < N; i++) {
        A[i] = sum[i - 1] - A[i - 1];  // A[i]는 sum[i-1] - A[i-1]로 구함
        if (A[i] < 1 || A[i] > N || used[A[i]]) {
            return false;  // 범위를 벗어나거나 이미 사용된 숫자인 경우
        }
        used[A[i]] = true;
    }
    
    return true;
}

void reset_used() {
    for (int i = 1; i <= N; i++) {
        used[i] = false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &sum[i]);
    }
    
    // 첫 번째 원소 A[0]을 1부터 N까지 시도
    for (int A1 = 1; A1 <= N; A1++) {
        reset_used();  // used 배열을 초기화
        if (is_valid(A1)) {
            // 유효한 수열을 찾은 경우 출력
            for (int i = 0; i < N; i++) {
                printf("%d ", A[i]);
            }
            printf("\n");
            return 0;
        }
    }
    
    return 0;
}