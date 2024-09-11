#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int max = 1000;
    int min = 10;
    int down = min - 1;
    int up = max + 1;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 500) {
            if (arr[i] > down) {
                down = arr[i];
            }
        } else if (arr[i] > 500) {
            if (arr[i] < up) {
                up = arr[i];
            }
        }
    }

    printf("%d %d\n", down, up);
    
    return 0;
}