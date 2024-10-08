#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char commands[100001];
    scanf("%s", commands);  

    int dx[4] = {0, 1, 0, -1}; 
    int dy[4] = {1, 0, -1, 0};  

    int x = 0, y = 0;
    int direction = 0; 

    int len = strlen(commands);
    for (int i = 0; i < len; i++) {
        char cmd = commands[i];

        if (cmd == 'L') {
            direction = (direction + 3) % 4;
        } else if (cmd == 'R') {
            direction = (direction + 1) % 4;
        } else if (cmd == 'F') {
            x += dx[direction];
            y += dy[direction];
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}