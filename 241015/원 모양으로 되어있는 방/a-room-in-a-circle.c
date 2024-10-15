#include <stdio.h>

#define MAX_N 1003

int N;
int people[MAX_N];

int calculate_distance(int start, int end) {
    if (end >= start) {
        return end - start;
    } else {
        return N - start + end;
    }
}

int total_distance_from(int start) {
    int total_distance = 0;
    
    for (int i = 0; i < N; i++) {
        int dist = calculate_distance(start, i);
        total_distance += people[i] * dist;
    }
    
    return total_distance;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &people[i]);
    }

    int min_total_distance = -1;

    for (int start = 0; start < N; start++) {
        int current_distance = total_distance_from(start);

        if (min_total_distance == -1 || current_distance < min_total_distance) {
            min_total_distance = current_distance;
        }
    }

    printf("%d\n", min_total_distance);
    
    return 0;
}