#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int start[100], end[100];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &start[i], &end[i]);
    }
    
    int max_overlap = 0; 
    for (int i = -100; i < 100; i++) {
        int current_overlap = 0; 
        for (int j = 0; j < n; j++) {
            if (start[j] < i && end[j] > i) {
                current_overlap++;
            }
        }
        if (current_overlap > max_overlap) {
            max_overlap = current_overlap;
        }
    }
    
    printf("%d\n", max_overlap);
    return 0;
}