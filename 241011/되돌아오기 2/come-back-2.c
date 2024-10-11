#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char commands[100001];
    scanf("%s", commands);

    int x = 0, y = 0; 
    int dir = 0; 
    int time = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int len = strlen(commands);

    for (int i = 0; i < len; i++) {
        if (commands[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
            time++;
        } 
        else if (commands[i] == 'L') {
            dir = (dir + 3) % 4;  
            time++;  
        } 
        else if (commands[i] == 'R') {
            dir = (dir + 1) % 4;
            time++;  
        }

        if (x == 0 && y == 0) {
            printf("%d\n", time);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}