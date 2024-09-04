#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double arr[5];
    double sum = 0.0; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    double avg = sum / n;

    printf("%.1f\n", avg);

    if (avg >= 4.0) {
        printf("Perfect\n");
    } else if (avg >= 3.0) {
        printf("Good\n");
    } else {
        printf("Poor\n");
    }

    return 0;
}