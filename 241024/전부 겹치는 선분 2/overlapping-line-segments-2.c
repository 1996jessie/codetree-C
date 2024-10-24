#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int segments[100][2];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &segments[i][0], &segments[i][1]);
    }

    for (int i = 0; i < n; i++) {
        int min_end = 1;
        int max_start = 100;

        for (int j = 0; j < n; j++) {
            if (j == i) continue; 
            if (segments[j][0] > min_end) {
                min_end = segments[j][0]; 
            }
            if (segments[j][1] < max_start) {
                max_start = segments[j][1];
            }
        }

        if (min_end <= max_start) {
            printf("Yes\n");
            return 0; 
        }
    }

    printf("No\n"); 
    return 0;
}