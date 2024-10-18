#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

typedef struct {
    int price;
    int shipping;
} Gift;

int compare(const void* a, const void* b) {
    int total_a = ((Gift*)a)->price + ((Gift*)a)->shipping;
    int total_b = ((Gift*)b)->price + ((Gift*)b)->shipping;
    return total_a - total_b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, B;
    Gift gifts[MAX_N];

    scanf("%d %d", &N, &B);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &gifts[i].price, &gifts[i].shipping);
    }

    qsort(gifts, N, sizeof(Gift), compare);

    int max_students = 0;

    for (int i = 0; i < N; i++) {
        int total_cost = 0;
        int used_coupon = 0;

        for (int j = 0; j < N; j++) {
            int current_cost;
            if (j == i) {
                current_cost = (gifts[j].price / 2) + gifts[j].shipping;
            } else {
                current_cost = gifts[j].price + gifts[j].shipping;
            }

            total_cost += current_cost;

            if (total_cost > B) {
                break;
            }

            if (j < N) {
                max_students = (j + 1 > max_students) ? (j + 1) : max_students;
            }
        }
    }

    printf("%d\n", max_students);
    return 0;
}