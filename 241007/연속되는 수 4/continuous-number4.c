#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N); 

    int max_len = 1; 
    int current_len = 1; 
    int prev, current;

    scanf("%d", &prev);  

    for (int i = 1; i < N; i++) {
        scanf("%d", &current);

        if (current > prev) {
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
            }
            current_len = 1;
        }

        prev = current; 
    }

    if (current_len > max_len) {
        max_len = current_len;
    }

    printf("%d\n", max_len);

    return 0;
}