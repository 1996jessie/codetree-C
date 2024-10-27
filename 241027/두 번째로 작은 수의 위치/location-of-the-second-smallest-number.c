#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int numbers[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int min = 101, second_min = 101;
    int second_min_position = -1;

    for (int i = 0; i < n; i++) {
        if (numbers[i] < min) {
            second_min = min;
            min = numbers[i];
        } else if (numbers[i] > min && numbers[i] < second_min) {
            second_min = numbers[i];
            second_min_position = i + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] == second_min && (i + 1) != second_min_position) {
            second_min_position = -1;
            break;
        }
    }

    printf("%d\n", second_min_position);
    return 0;
}