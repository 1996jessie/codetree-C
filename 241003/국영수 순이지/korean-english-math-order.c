#include <stdio.h>
#include <string.h>

struct Student {
    char name[11];
    int korean;
    int english;
    int math;
};

void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (students[j].korean > students[maxIndex].korean) {
                maxIndex = j;
            }
            else if (students[j].korean == students[maxIndex].korean) {
                if (students[j].english > students[maxIndex].english) {
                    maxIndex = j;
                }
                else if (students[j].english == students[maxIndex].english) {
                    if (students[j].math > students[maxIndex].math) {
                        maxIndex = j;
                    }
                }
            }
        }

        if (maxIndex != i) {
            struct Student temp = students[i];
            students[i] = students[maxIndex];
            students[maxIndex] = temp;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    struct Student students[10];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", students[i].name, students[i].korean, students[i].english, students[i].math);
    }

    return 0;
}