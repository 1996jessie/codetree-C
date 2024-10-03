#include <stdio.h>

struct Element {
    int value;
    int index;
};

void swap(struct Element *a, struct Element *b) {
    struct Element temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(struct Element arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].value < arr[minIdx].value) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            swap(&arr[i], &arr[minIdx]);
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;

    scanf("%d", &N);
    
    struct Element arr[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i].value);
        arr[i].index = i; 
    }

    int result[N];

    selectionSort(arr, N);

    for (int i = 0; i < N; i++) {
        result[arr[i].index] = i + 1; 
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    
    return 0;
}