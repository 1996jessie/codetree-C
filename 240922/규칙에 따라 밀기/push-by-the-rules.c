#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101];
    char commands[101];

    scanf("%s", A);
    scanf("%s", commands);

    int lenA = strlen(A);
    int lenCommands = strlen(commands); 
    char temp; 

    for (int i = 0; i < lenCommands; i++) {
        if (commands[i] == 'L') {
            temp = A[0];
            for (int j = 0; j < lenA - 1; j++) {
                A[j] = A[j + 1];
            }
            A[lenA - 1] = temp;
        } else if (commands[i] == 'R') {
            temp = A[lenA - 1];
            for (int j = lenA - 1; j > 0; j--) {
                A[j] = A[j - 1];
            }
            A[0] = temp;
        }
    }

    printf("%s\n", A);

    return 0;
}