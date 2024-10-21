#include <stdio.h>
#include <stdlib.h>

int abs_diff(int a, int b) {
    return abs(a - b);
}

int calculate_difference(int arr[], int n) {
    int total_diff = 0;
    for (int i = 1; i < n; i++) {
        total_diff += abs_diff(arr[i], arr[i-1]);
    }
    return total_diff;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_difference = 1e9;  

    for (int i = 0; i < n; i++) {
        int doubled[n];
        for (int j = 0; j < n; j++) {
            doubled[j] = arr[j];
        }
        doubled[i] = arr[i] * 2;

        for (int j = 0; j < n; j++) {
            if (j == i) continue; 

            int new_arr[n - 1];
            int idx = 0;

            for (int k = 0; k < n; k++) {
                if (k != j) {
                    new_arr[idx++] = doubled[k]; 
                }
            }

            int current_diff = calculate_difference(new_arr, n - 1);

            if (current_diff < min_difference) {
                min_difference = current_diff;
            }
        }
    }

    printf("%d\n", min_difference);

    return 0;
}