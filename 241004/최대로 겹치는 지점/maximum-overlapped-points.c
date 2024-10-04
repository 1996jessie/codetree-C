#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
     int n;
    int x1[100], x2[100];
    int checked[101] = {0}; 

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);

        for (int j = x1[i]; j <= x2[i]; j++) {
            checked[j]++;
        }
    }

    int max = 0;
    for (int i = 1; i <= 100; i++) {
        if (checked[i] > max) {
            max = checked[i];
        }
    }

    printf("%d\n", max);
    return 0;
}