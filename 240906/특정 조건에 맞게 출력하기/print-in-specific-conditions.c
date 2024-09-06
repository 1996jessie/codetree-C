#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100]; 
    int i = 0;    
    int num; 

    
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break; 
        }
        arr[i] = num;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (arr[j] % 2 == 0) {
            printf("%d ", arr[j] / 2);
        } else {
            printf("%d ", arr[j] + 3);
        }
    }

    return 0;
}