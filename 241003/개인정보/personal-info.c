#include <stdio.h>
#include <string.h>

struct Student {
    char name[11]; 
    int height;
    float weight;
};

void sortByName(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortByHeight(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].height < students[j].height) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", students[i].name, &students[i].height, &students[i].weight);
    }

    sortByName(students, 5);
    printf("name\n");
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", students[i].name, students[i].height, students[i].weight);
    }

    sortByHeight(students, 5);
    printf("\nheight\n");
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", students[i].name, students[i].height, students[i].weight);
    }

    return 0;
}