#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int num, count = 0; 
    int sum = 0; 

    while (1) {
        scanf("%d", &num);
        arr[count++] = num;
        if (num == 0) {
            break;
        }
    }

    if (count >= 4) {
        sum = arr[count - 2] + arr[count - 3] + arr[count - 4]; 
    }

    printf("%d\n", sum);

    return 0;
}