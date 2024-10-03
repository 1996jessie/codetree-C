#include <stdio.h>
#include <string.h>

struct Person {
    char name[11];  
    int height;
    int weight;
};

void sortByHeight(struct Person people[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (people[j].height < people[minIndex].height) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            struct Person temp = people[i];
            people[i] = people[minIndex];
            people[minIndex] = temp;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    struct Person people[10]; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", people[i].name, &people[i].height, &people[i].weight);
    }

    sortByHeight(people, n);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
    }

    return 0;
}