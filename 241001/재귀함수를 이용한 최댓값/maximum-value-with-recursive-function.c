#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0]; 
    }

    int maxOfRest = findMax(arr, n - 1);
    return (arr[n - 1] > maxOfRest) ? arr[n - 1] : maxOfRest; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxValue = findMax(arr, n);
    printf("%d\n", maxValue);

    return 0;
}