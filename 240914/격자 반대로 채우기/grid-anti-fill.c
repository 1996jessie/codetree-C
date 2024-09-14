#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int number = 0;
    int graph[n][n];

    // Initialize the graph with zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            int adjusted_i = n - i;
            if (adjusted_i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    int adjusted_j = n - j;
                    number++;
                    graph[adjusted_j - 1][adjusted_i - 1] = number;
                }
            } else {
                for (int k = 0; k < n; k++) {
                    number++;
                    graph[k][adjusted_i - 1] = number;
                }
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            int adjusted_i = n - i;
            if (adjusted_i % 2 == 0) {
                for (int k = 0; k < n; k++) {
                    number++;
                    graph[k][adjusted_i - 1] = number;
                }
            } else {
                for (int j = 0; j < n; j++) {
                    int adjusted_j = n - j;
                    number++;
                    graph[adjusted_j - 1][adjusted_i - 1] = number;
                }
            }
        }
    }

    // Print the graph
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}