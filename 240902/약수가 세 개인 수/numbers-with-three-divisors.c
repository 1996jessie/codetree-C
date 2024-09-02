#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    int count1 = 0;

    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        int count2 = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count2++;
            }
        }

        if (count2 == 3) {
            count1++;
        }
    }

    printf("%d\n", count1);

    return 0;
}