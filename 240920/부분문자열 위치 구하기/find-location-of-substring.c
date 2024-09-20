#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char input[1001], target[1001];
    
    scanf("%s", input);
    scanf("%s", target);
    
    int input_len = strlen(input);
    int target_len = strlen(target);
    int found_index = -1;

    for (int i = 0; i <= input_len - target_len; i++) {
        int match = 1;
        
        for (int j = 0; j < target_len; j++) {
            if (input[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        
        if (match) {
            found_index = i;
            break;
        }
    }

    printf("%d\n", found_index);

    return 0;
}