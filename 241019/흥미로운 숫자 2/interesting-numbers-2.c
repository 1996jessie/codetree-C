#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    int ans = 0;

    scanf("%d %d", &x, &y);

    for (int i = x; i <= y; i++) {
        int num = i;
        int digit[10] = {0};
        int all_digits = 0; 

        while (num) {
            digit[num % 10]++;
            all_digits++; 
            num /= 10;   
        }

        int interesting = 0;

        for (int j = 0; j < 10; j++) {
            if (digit[j] == all_digits - 1) {
                interesting = 1; 
                break;
            }
        }

        if (interesting) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}