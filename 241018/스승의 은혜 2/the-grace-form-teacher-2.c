#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N, B;
    int P[MAX_N];

    scanf("%d %d", &N, &B);

    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }

    qsort(P, N, sizeof(int), compare);

    int max_students = 0;

    for (int i = 0; i < N; i++) {
        int budget = B;
        int count = 0;

        for (int j = 0; j < N; j++) {
            int price = P[j];
            if (i == j) {
                price /= 2; 
            }

            if (budget >= price) {
                budget -= price;
                count++;
            } else {
                break;
            }
        }

        if (count > max_students) {
            max_students = count;
        }
    }

    printf("%d\n", max_students);

    return 0;
}