#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char char1, char2;
    int sum, diff;

    scanf("%c %c", &char1, &char2);

    sum = char1 + char2;
    diff = char1 > char2 ? char1 - char2 : char2 - char1;

    printf("%d %d\n", sum, diff);

    return 0;
}