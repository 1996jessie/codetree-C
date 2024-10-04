#include <stdio.h>
#include <string.h>

int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

int NumOfDays(int m, int d) {
    int total_days = 0;
    for (int i = 1; i < m; i++)
        total_days += days_in_month[i];  
    total_days += d;  
    return total_days;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    char A[4];

    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);

    const char* week_days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int target_day = 0;
    for (int i = 0; i < 7; i++) {
        if (strcmp(A, week_days[i]) == 0) {
            target_day = i;
            break;
        }
    }
    
    int total_days1 = NumOfDays(m1, d1);
    int total_days2 = NumOfDays(m2, d2);

    int diff_days = total_days2 - total_days1 + 1; 
    int start_day_of_week = 0;  

    int count = 0;
    for (int i = 0; i < diff_days; i++) {
        if ((start_day_of_week + i) % 7 == target_day)
            count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}