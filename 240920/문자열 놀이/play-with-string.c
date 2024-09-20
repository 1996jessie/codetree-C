#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[101]; 
    int q; 
    scanf("%s %d", s, &q); 

    for (int i = 0; i < q; i++) {
        int type;  
        scanf("%d", &type);

        if (type == 1) {
            int a, b;
            scanf("%d %d", &a, &b);
            char temp = s[a - 1]; 
            s[a - 1] = s[b - 1];
            s[b - 1] = temp;

            printf("%s\n", s);
        } else if (type == 2) {
            char a, b;
            scanf(" %c %c", &a, &b);  
            for (int j = 0; j < strlen(s); j++) {
                if (s[j] == a) {
                    s[j] = b;
                }
            }
            printf("%s\n", s);
        }
    }

    return 0;
}