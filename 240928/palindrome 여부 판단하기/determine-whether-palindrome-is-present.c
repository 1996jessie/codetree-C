#include <stdio.h>
#include <string.h> 

int isPalindrome(char s[]) {
    int len = strlen(s); 
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101];
    scanf("%100s", A); 

    if (isPalindrome(A)) {
        printf("Yes\n"); 
    } else {
        printf("No\n"); 
    }

    return 0;
}