#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int A[MAX_N]; 
    int min_distance = 1e9; 

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int target = 0; target < n; target++) {
        int total_distance = 0;

        for (int i = 0; i < n; i++) {
            total_distance += A[i] * abs(i - target);
        }

        if (total_distance < min_distance) {
            min_distance = total_distance;
        }
    }

    printf("%d\n", min_distance);

    return 0;
}