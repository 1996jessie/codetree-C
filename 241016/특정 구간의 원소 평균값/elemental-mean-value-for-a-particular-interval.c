#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int arr[100];
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int sum = 0;
            int length = j - i + 1;

            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            
            if (sum % length == 0) {
                int avg = sum / length;

                for (int k = i; k <= j; k++) {
                    if (arr[k] == avg) {
                        count++;
                        break;
                    }
                }
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}