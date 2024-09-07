#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    int arr[10] = {0}; 

    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num); 
        arr[num]++; 
    }

    for (int i = 1; i <= 9; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}