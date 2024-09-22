#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[1001]; 
    int q; 
    scanf("%s %d", str, &q);

    int len = strlen(str); 
    char temp; 

    for (int i = 0; i < q; i++) {
        int command;
        scanf("%d", &command);

        if (command == 1) {
            temp = str[0];
            for (int j = 0; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = temp;
        } else if (command == 2) {
            temp = str[len - 1];
            for (int j = len - 1; j > 0; j--) {
                str[j] = str[j - 1];
            }
            str[0] = temp;
        } else if (command == 3) {
            for (int j = 0; j < len / 2; j++) {
                temp = str[j];
                str[j] = str[len - j - 1];
                str[len - j - 1] = temp;
            }
        }

        printf("%s\n", str);
    }

    return 0;
}