#include <stdio.h>
#include <limits.h>

#define MAX_N 1000

int n;
int hills[MAX_N];

int min_cost() {
    int min_total_cost = INT_MAX;
    
    for (int low = 0; low <= 83; low++) {
        int high = low + 17;
        int total_cost = 0;

        for (int i = 0; i < n; i++) {
            if (hills[i] < low) {
                int diff = low - hills[i];
                total_cost += diff * diff;
            } else if (hills[i] > high) {
                int diff = hills[i] - high;
                total_cost += diff * diff;
            }
        }

        if (total_cost < min_total_cost) {
            min_total_cost = total_cost;
        }
    }
    
    return min_total_cost;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &hills[i]);
    }

    int result = min_cost();
    printf("%d\n", result);
    
    return 0;
}