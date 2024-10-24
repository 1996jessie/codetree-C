#include <stdio.h>

#define MAX_N 100

int n, m;
int arr[MAX_N];

int canDivide(int maxSum) {
    int currentSum = 0;
    int parts = 1; 

    for (int i = 0; i < n; i++) {
        if (currentSum + arr[i] <= maxSum) {
            currentSum += arr[i];
        } else {
            parts++;
            currentSum = arr[i];
            if (parts > m) {
                return 0;
            }
        }
    }
    return 1; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > left) left = arr[i]; 
        right += arr[i];
    }

    int result = right;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (canDivide(mid)) {
            result = mid;
            right = mid - 1; 
        } else {
            left = mid + 1;  
        }
    }

    printf("%d\n", result);

    return 0;
}