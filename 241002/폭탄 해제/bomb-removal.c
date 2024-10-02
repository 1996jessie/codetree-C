#include <stdio.h>

struct Command {
    char code[11]; 
    char color; 
    int second;
};

int main() {
    // 여기에 코드를 작성해주세요.
    struct Command command;

    scanf("%s %c %d", command.code, &command.color, &command.second);

    printf("code : %s\n", command.code);
    printf("color : %c\n", command.color);
    printf("second : %d\n", command.second);

    return 0;
}