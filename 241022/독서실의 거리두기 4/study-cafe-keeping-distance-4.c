#include <stdio.h>
#include <string.h>

#define MAX_N 100

int max_min_distance(char seats[], int N) {
    int distances[MAX_N] = {0};
    int last_occupied = -1;

    for (int i = 0; i < N; i++) {
        if (seats[i] == '1') {
            last_occupied = i;
        } else if (last_occupied != -1) {
            distances[i] = i - last_occupied;
        }
    }

    last_occupied = -1;
    for (int i = N - 1; i >= 0; i--) {
        if (seats[i] == '1') {
            last_occupied = i;
        } else if (last_occupied != -1) {
            if (distances[i] == 0) {
                distances[i] = last_occupied - i;
            } else {
                distances[i] = distances[i] < last_occupied - i ? distances[i] : last_occupied - i;
            }
        }
    }

    int first_max = -1, second_max = -1;
    for (int i = 0; i < N; i++) {
        if (seats[i] == '0') {
            if (distances[i] > first_max) {
                second_max = first_max;
                first_max = distances[i];
            } else if (distances[i] > second_max) {
                second_max = distances[i];
            }
        }
    }

    return second_max;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    char seats[MAX_N + 1];
    
    scanf("%d", &N);
    scanf("%s", seats);

    printf("%d\n", max_min_distance(seats, N));

    return 0;
}