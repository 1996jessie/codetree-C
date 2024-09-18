#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char input[26]; 
    char hello[] = "Hello";  

    scanf("%s", input);

    int input_len = strlen(input);
    int hello_len = strlen(hello);

    for (int i = 0; i < hello_len; i++) {
        input[input_len + i] = hello[i];
    }

    input[input_len + hello_len] = '\0';
    
    printf("%s\n", input);

    return 0;
}