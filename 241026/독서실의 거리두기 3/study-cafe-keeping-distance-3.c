#include <stdio.h>
#include <string.h>

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char seats[MAX_N + 1];
    
    // 입력
    scanf("%d", &n);
    scanf("%s", seats);
    
    int max_min_dist = 0; 
    for (int i = 0; i < n; i++) {
        if (seats[i] == '0') {
            int left_dist = n, right_dist = n;
            
            for (int j = i - 1; j >= 0; j--) {
                if (seats[j] == '1') {
                    left_dist = i - j;
                    break;
                }
            }
            
            for (int j = i + 1; j < n; j++) {
                if (seats[j] == '1') {
                    right_dist = j - i;
                    break;
                }
            }
            
            int min_dist = (left_dist < right_dist) ? left_dist : right_dist;

            if (min_dist > max_min_dist) {
                max_min_dist = min_dist;
            }
        }
    }

    printf("%d\n", max_min_dist);
    
    return 0;
}