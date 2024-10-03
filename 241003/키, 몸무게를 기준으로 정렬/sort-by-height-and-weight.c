#include <stdio.h>
#include <string.h>

struct Student {
    char name[11];   
    int height;
    int weight;
};

void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].height > students[j].height) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
            else if (students[i].height == students[j].height && students[i].weight < students[j].weight) {
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
    
    struct Student students[10]; 
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].height, &students[i].weight);
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", students[i].name, students[i].height, students[i].weight);
    }

    return 0;
}