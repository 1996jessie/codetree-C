#include <stdio.h>
#include <stdbool.h>

#define MAX_N 1000

int N;
int sum[MAX_N];
int A[MAX_N];

bool used[MAX_N + 1];  

bool is_valid(int A1) {
    A[0] = A1;
    used[A1] = true;
    
    for (int i = 1; i < N; i++) {
        A[i] = sum[i - 1] - A[i - 1];  
        if (A[i] < 1 || A[i] > N || used[A[i]]) {
            return false;  
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
    
    for (int A1 = 1; A1 <= N; A1++) {
        reset_used(); 
        if (is_valid(A1)) {
            for (int i = 0; i < N; i++) {
                printf("%d ", A[i]);
            }
            printf("\n");
            return 0;
        }
    }
    
    return 0;
}