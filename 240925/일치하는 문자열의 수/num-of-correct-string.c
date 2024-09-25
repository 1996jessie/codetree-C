#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char A[101];
    int count = 0;

    scanf("%d %s", &n, A);
    
    for (int i = 0; i < n; i++) {
        char str[101]; 
        scanf("%s", str);

        if (strcmp(str, A) == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}