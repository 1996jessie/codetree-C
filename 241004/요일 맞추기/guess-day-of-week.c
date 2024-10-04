#include <stdio.h>

int NumOfDays(int m, int d) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    
    for (int i = 1; i < m; i++)
        total_days += days[i];

    total_days += d;
    
    return total_days;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, m2, d1, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1);
    
    while (diff < 0)
        diff += 7;

    const char* day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    printf("%s\n", day_of_week[diff % 7]);

    return 0;
}