#include <stdio.h>
#include <string.h>

struct Student {
    char name[11];
    int score1;
    int score2;
    int score3;
    int total; 
};

void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (students[j].total < students[minIndex].total) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            struct Student temp = students[i];
            students[i] = students[minIndex];
            students[minIndex] = temp;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    struct Student students[10];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].score1, &students[i].score2, &students[i].score3);
        students[i].total = students[i].score1 + students[i].score2 + students[i].score3;
    }

    sortStudents(students, n);
    
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", students[i].name, students[i].score1, students[i].score2, students[i].score3);
    }

    return 0;
}