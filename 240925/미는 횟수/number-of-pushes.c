#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101], B[101]; 
    scanf("%s", A);
    scanf("%s", B);

    int len = strlen(A);
    int found = -1; 

    for (int n = 1; n <= len; n++) {
        char temp[101];
        strncpy(temp, A + len - n, n);
        strncpy(temp + n, A, len - n);
        temp[len] = '\0'; 

        if (strcmp(temp, B) == 0) {
            found = n; 
            break; 
        }
    }

    printf("%d\n", found);

    return 0;
}