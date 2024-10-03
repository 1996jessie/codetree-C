#include <stdio.h>

struct Student {
    int height;
    int weight;
    int index;
};

void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].height < students[j].height || 
               (students[i].height == students[j].height && students[i].weight < students[j].weight) ||
               (students[i].height == students[j].height && students[i].weight == students[j].weight && students[i].index > students[j].index)) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 

    struct Student students[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &students[i].height, &students[i].weight);
        students[i].index = i + 1; 
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", students[i].height, students[i].weight, students[i].index);
    }

    return 0;
}