#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *weekdays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int m1, d1, m2, d2;
    
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    int start_day_of_week = 1; 

    int days_diff = 0;

    if (m1 == m2) {
        days_diff = d2 - d1;
    } 
    else {
        days_diff += days_in_month[m1 - 1] - d1;

        for (int i = m1; i < m2 - 1; i++) {
            days_diff += days_in_month[i];
        }

        days_diff += d2;
    }

    int target_day_of_week = (start_day_of_week + days_diff) % 7;

    printf("%s\n", weekdays[target_day_of_week]);

    return 0;
}