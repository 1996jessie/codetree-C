#include <stdio.h>
#include <string.h>

#define MAX_N 100

int n;
char seat[MAX_N + 1];

int MinDist() {
    int min_dist = n;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (seat[i] == '1' && seat[j] == '1') {
                int dist = j - i;
                if (dist < min_dist) {
                    min_dist = dist;
                }
            }
        }
    }
    return min_dist;
}


int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    scanf("%s", seat);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (seat[i] == '0' && seat[j] == '0') {
                seat[i] = '1';
                seat[j] = '1';
                
                int current_min_dist = MinDist();
                if (current_min_dist > ans) {
                    ans = current_min_dist;
                }

                seat[i] = '0';
                seat[j] = '0';
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}