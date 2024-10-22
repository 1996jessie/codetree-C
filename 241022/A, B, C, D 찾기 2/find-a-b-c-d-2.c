#include <stdio.h>

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
    int values[15];

    for (int i = 0; i < 15; i++) {
        scanf("%d", &values[i]);
    }
    
    // 배열을 정렬합니다. (버블 정렬 사용)
    bubbleSort(values, 15);
    
    // 가장 작은 값은 A입니다.
    int A = values[0];
    
    // A, B, C, D를 구합니다.
    int B = values[1] - A; // A + B에서 B를 구합니다.
    int C = values[2] - A; // A + C에서 C를 구합니다.
    int D = values[3] - A; // A + D에서 D를 구합니다.
    
    // 결과를 출력합니다.
    printf("%d %d %d %d\n", A, B, C, D);
    
    return 0;
}