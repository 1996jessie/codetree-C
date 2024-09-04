#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;
    int count = 10;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 250) {
            count = i;
            break;
        }
    }

    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / count;

    printf("%d %.1f\n", sum, avg);

    return 0;
}