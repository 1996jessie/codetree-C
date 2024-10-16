#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

typedef struct {
    int position;
    char letter;
} Person;

int compare(const void* a, const void* b) {
    return ((Person*)a)->position - ((Person*)b)->position;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    Person people[MAX_N];

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%d %c", &people[i].position, &people[i].letter);
    }

    qsort(people, N, sizeof(Person), compare);

    int max_score = 0;
    int left = 0;
    int current_score = 0;

    for (int right = 0; right < N; right++) {
        while (people[right].position - people[left].position > K) {
            if (people[left].letter == 'G')
                current_score -= 1;
            else if (people[left].letter == 'H')
                current_score -= 2;
            left++;
        }

        if (people[right].letter == 'G')
            current_score += 1;
        else if (people[right].letter == 'H')
            current_score += 2;

        if (current_score > max_score)
            max_score = current_score;
    }

    printf("%d\n", max_score);

    return 0;
}