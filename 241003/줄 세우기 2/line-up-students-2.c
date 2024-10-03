#include <stdio.h>

struct Student {
    int height;
    int weight;
    int index;
};

void bubbleSort(struct Student arr[], int n) {
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].height > arr[j + 1].height || 
                (arr[j].height == arr[j + 1].height && arr[j].weight < arr[j + 1].weight)) {
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
    struct Student students[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &students[i].height, &students[i].weight);
        students[i].index = i + 1;
    }

    bubbleSort(students, n);

    for (i = 0; i < n; i++) {
        printf("%d %d %d\n", students[i].height, students[i].weight, students[i].index);
    }

    return 0;
}