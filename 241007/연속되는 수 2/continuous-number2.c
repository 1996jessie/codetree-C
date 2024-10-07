#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int max_count = 1; 
    int current_count = 1; 
    int prev, current;

    scanf("%d", &prev);  

    for (int i = 1; i < N; i++) {
        scanf("%d", &current); 
        
        if (current == prev) {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
            }
            current_count = 1; 
        }
        
        prev = current;
    }

    if (current_count > max_count) {
        max_count = current_count;
    }

    printf("%d\n", max_count);

    return 0;
}