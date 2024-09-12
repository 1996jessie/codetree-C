#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    double avg1[2];
    double avg2[4];
    double sum = 0;


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; 
        }
    }

    for (int i = 0; i < 2; i++) {
        double sum1 = 0;
        for (int j = 0; j < 4; j++) {
            sum1 += arr[i][j];
        }
        avg1[i] = sum1 / 4.0; 
    }

    for (int j = 0; j < 4; j++) {
        double sum2 = 0;
        for (int i = 0; i < 2; i++) {
            sum2 += arr[i][j];
        }
        avg2[j] = sum2 / 2.0; 
    }

    double avg = sum / 8.0;

    for (int i = 0; i < 2; i++) {
        printf("%.1f ", avg1[i]);
    }
    printf("\n");

    for (int j = 0; j < 4; j++) {
        printf("%.1f ", avg2[j]);
    }
    printf("\n");

    printf("%.1f\n", avg);

    return 0;
}