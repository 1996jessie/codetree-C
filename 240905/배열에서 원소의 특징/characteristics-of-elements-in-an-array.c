#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
int arr[10]; 
    int i;


    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < 10; i++) {
        if (arr[i] % 3 == 0) { 
            printf("%d\n", arr[i - 1]);  
            break; 
        }
    }

    return 0;
}