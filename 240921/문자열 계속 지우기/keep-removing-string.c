#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char str_a[101], str_b[101];
int len_a, len_b;

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%s", str_a);
    scanf("%s", str_b);

    len_a = strlen(str_a);
    len_b = strlen(str_b);

    while(true) {
        int idx = -1;

        int candidates = len_a - len_b + 1;
        for(int i = 0; i < candidates; i++) {
            bool is_same = true;
            for(int j = 0; j < len_b; j++) {
                if(str_a[i + j] != str_b[j]) {
                    is_same = false;
                    break;
                }
            }
            if(is_same) {
                idx = i;
                break;
            }
        }
        
        if(idx == -1)
            break;
        for(int i = idx + len_b; i < len_a; i++) {
            str_a[i - len_b] = str_a[i];
        }
        str_a[len_a - len_b] = '\0';
        len_a = strlen(str_a);
    }

    printf("%s", str_a);

    return 0;
}