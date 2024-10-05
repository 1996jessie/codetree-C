#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int position = 0;
    int visited[1001] = {0}; 
    int offset = 500;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        char direction;
        scanf("%d %c", &x, &direction);

        if (direction == 'R') {
            for (int j = 1; j <= x; j++) {
                position++;
                visited[position + offset]++;
            }
        } else if (direction == 'L') {
            for (int j = 1; j <= x; j++) {
                position--;
                visited[position + offset]++;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < 1001; i++) {
        if (visited[i] >= 2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}