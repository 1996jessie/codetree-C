#include <stdio.h>

struct Number {
    int value;
    int index;
};

void bubbleSort(struct Number arr[], int n) {
    int i, j;
    struct Number temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].value > arr[j + 1].value || 
               (arr[j].value == arr[j + 1].value && arr[j].index > arr[j + 1].index)) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i;
    struct Number numbers[1000];
    int result[1000];

    // 입력
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i].value);
        numbers[i].index = i; // 원래 인덱스를 저장
    }

    // 정렬
    bubbleSort(numbers, n);

    // 결과 배열에 이동한 위치 저장
    for (i = 0; i < n; i++) {
        result[numbers[i].index] = i + 1; // 인덱스 보정
    }

    // 출력
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}