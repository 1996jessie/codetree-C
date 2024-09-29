#include <stdio.h>

int countDistinctChars(char str[]) {
    int alphabet[26] = {0}; 
    int distinctCount = 0;  

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a'; 
        if (alphabet[index] == 0) {
            alphabet[index] = 1; 
            distinctCount++;   
        }
    }

    return distinctCount;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101]; 
    scanf("%s", A);

    int distinctCount = countDistinctChars(A);

    if (distinctCount >= 2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}