#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int even = 0;
    int triple = 0; 
    int count = 0;
    double avg = 0.0; 

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 10; i += 2) {
        even += arr[i];
    }

    for (int i = 2; i < 10; i += 3) {
        triple += arr[i];
        count++;
    }

    if (count > 0) {
        avg = (double)triple / count;
    }

    printf("%d %.1lf\n", even, avg);

    return 0;
}