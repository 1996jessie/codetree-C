#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int N, S;
    int arr[MAX_N];
    
    scanf("%d %d", &N, &S);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int closest_sum = 0;
    int min_diff = INT_MAX;

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            int current_sum = 0;

            for(int k = 0; k < N; k++) {
                if(k != i && k != j) {
                    current_sum += arr[k];
                }
            }

            int diff = abs(current_sum - S);
            if(diff < min_diff) {
                min_diff = diff;
                closest_sum = current_sum;
            }
        }
    }

    printf("%d\n", min_diff);
    return 0;
}