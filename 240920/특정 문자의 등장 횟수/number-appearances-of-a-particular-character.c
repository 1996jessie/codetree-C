#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];  
    int ee = 0, eb = 0;

    scanf("%s", str);

    int length = strlen(str);

    for (int i = 0; i < length - 1; i++) {
        if (str[i] == 'e' && str[i+1] == 'e') {
            ee++;
        }
        if (str[i] == 'e' && str[i+1] == 'b') {
            eb++;
        }
    }

    printf("%d %d\n", ee, eb);

    return 0;
}