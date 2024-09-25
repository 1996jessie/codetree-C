#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[201]; 
    int count = 0; 
    char strings[200][201]; 

    while (1) {
        scanf("%s", str); 

        if (strcmp(str, "0") == 0) {
            break;
        }

        strcpy(strings[count], str);
        count++;
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++) {
        if (i % 2 == 0) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}