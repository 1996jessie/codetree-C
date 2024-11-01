#include <stdio.h>

#define MAX_N 100

int n;
int segments[MAX_N][2];

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &segments[i][0], &segments[i][1]);
    }
    
    int overall_min = 1000, overall_max = 0;

    for (int i = 0; i < n; i++) {
        overall_min = min(overall_min, segments[i][0]);
        overall_max = max(overall_max, segments[i][1]);
    }

    int min_length = 1000; 

    for (int i = 0; i < n; i++) {
        int current_min = 1000, current_max = 0;

        for (int j = 0; j < n; j++) {
            if (i == j) continue; 
            current_min = min(current_min, segments[j][0]);
            current_max = max(current_max, segments[j][1]);
        }

        int length = current_max - current_min;
        min_length = min(min_length, length);
    }

    printf("%d\n", min_length);
    return 0;
}