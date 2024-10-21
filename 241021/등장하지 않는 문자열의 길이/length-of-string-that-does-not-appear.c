#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_N 101

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    char str[MAX_N];

    scanf("%d", &N);
    scanf("%s", str);

    for (int len = 1; len <= N; len++) {
        bool found_duplicate = false;

        for (int i = 0; i <= N - len; i++) {
            for (int j = i + 1; j <= N - len; j++) {
                if (strncmp(&str[i], &str[j], len) == 0) {
                    found_duplicate = true;
                    break;
                }
            }
            if (found_duplicate) break;
        }

        if (!found_duplicate) {
            printf("%d\n", len);
            break;
        }
    }
    
    return 0;
}