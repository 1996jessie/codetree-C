#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    if (m1 == m2) {
        total_days = d2 - d1 + 1;
    } 

    else {
        total_days += days_in_month[m1 - 1] - d1 + 1;

        total_days += d2;

        for (int i = m1; i < m2 - 1; i++) {
            total_days += days_in_month[i];
        }
    }

    printf("%d\n", total_days);

    return 0;
}