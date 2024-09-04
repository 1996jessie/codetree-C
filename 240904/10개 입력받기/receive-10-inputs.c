#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int count = 0; 
    int sum = 0; 

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break; 
        }
        sum += arr[i];
        count++; 
    }

    double avg = count > 0 ? (double)sum / count : 0.0;

    printf("%d %.1f\n", sum, avg);

    return 0;
}