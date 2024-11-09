#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체로 동적 배열 정의
typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

// 동적 배열 초기화 함수
void initArray(DynamicArray *arr, int initialCapacity) {
    arr->data = (int *)malloc(initialCapacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initialCapacity;
}

// 동적 배열 메모리 해제 함수
void freeArray(DynamicArray *arr) {
    free(arr->data);
}

// 배열 크기를 두 배로 늘리는 함수
void resizeArray(DynamicArray *arr) {
    arr->capacity *= 2;
    arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
}

// push_back 연산
void push_back(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        resizeArray(arr);
    }
    arr->data[arr->size++] = value;
}

// pop_back 연산
void pop_back(DynamicArray *arr) {
    if (arr->size > 0) {
        arr->size--;
    }
}

// size 연산
int size(DynamicArray *arr) {
    return arr->size;
}

// get 연산
int get(DynamicArray *arr, int index) {
    if (index >= 1 && index <= arr->size) {
        return arr->data[index - 1];
    }
    return -1; // 불가능한 경우는 없다고 가정하므로 여기에는 도달하지 않습니다.
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    DynamicArray arr;
    initArray(&arr, 10); // 초기 용량은 10으로 설정

    for (int i = 0; i < N; i++) {
        char command[20];
        scanf("%s", command);

        if (strcmp(command, "push_back") == 0) {
            int value;
            scanf("%d", &value);
            push_back(&arr, value);
        } else if (strcmp(command, "pop_back") == 0) {
            pop_back(&arr);
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size(&arr));
        } else if (strcmp(command, "get") == 0) {
            int index;
            scanf("%d", &index);
            printf("%d\n", get(&arr, index));
        }
    }

    freeArray(&arr); // 동적 메모리 해제
    return 0;
}