#include <stdio.h>

#define MAX_A 40
#define MAX_N 15

int arr[MAX_N];

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < MAX_N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int a = 1; a <= MAX_A; a++) {
        for (int b = a; b <= MAX_A; b++) {
            for (int c = b; c <= MAX_A; c++) {
                for (int d = c; d <= MAX_A; d++) {
                    int arr2[MAX_N] = {a, b, c, d, a + b, b + c, c + d, d + a,
                                       a + c, b + d, a + b + c, a + b + d, a + c + d, b + c + d,
                                       a + b + c + d};

                    bubbleSort(arr2, MAX_N);
                    bubbleSort(arr, MAX_N);

                    int issame = 1;
                    for (int i = 0; i < MAX_N; i++) {
                        if (arr[i] != arr2[i]) {
                            issame = 0;
                            break;
                        }
                    }
                    
                    if (issame) {
                        printf("%d %d %d %d\n", a, b, c, d);
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}