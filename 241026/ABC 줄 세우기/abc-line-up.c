#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char people[27];
    char sorted[27];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &people[i]);
        sorted[i] = people[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sorted[i] > sorted[j]) {
                char temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    int swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (people[j] > people[j + 1]) {
                char temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
                swaps++;
            }
        }
    }

    printf("%d\n", swaps);
    return 0;
}