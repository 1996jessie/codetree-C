#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count[201] = {0}; 
    int max_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = a[i] + a[j];

            if (sum % 2 == 0) {
                int k = sum / 2; 
                count[k]++; 
                if (count[k] > max_count) {
                    max_count = count[k]; 
                }
            }
        }
    }

    printf("%d\n", max_count);

    return 0;
}