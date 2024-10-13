#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int A[101]; 
    int count = 0;  

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (A[i] <= A[j] && A[j] <= A[k]) {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}