#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr1[10]; 
    int arr2[7] = {0}; 

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
        arr2[arr1[i]]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d - %d\n", i, arr2[i]);
    }

    return 0;
}