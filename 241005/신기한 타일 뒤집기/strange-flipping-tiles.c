#include <stdio.h>

#define MAX_K 100000 

int n;
int tiles[2 * MAX_K + 1]; 
int white = 0, black = 0;

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);

    int cur = MAX_K;  

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        scanf("%d %c", &x, &dir);

        if (dir == 'L') {
            while (x--) {
                tiles[cur] = 1; 
                if (x) cur--;   
            }
        } else {
            while (x--) {
                tiles[cur] = 2;
                if (x) cur++;
            }
        }
    }

    for (int i = 0; i <= 2 * MAX_K; i++) {
        if (tiles[i] == 1) {
            white++;
        } else if (tiles[i] == 2) {
            black++;
        }
    }

    printf("%d %d\n", white, black);

    return 0;
}