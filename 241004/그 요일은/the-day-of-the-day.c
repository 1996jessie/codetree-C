#include <stdio.h>
#include <string.h>

int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

int NumOfDays(int m, int d) {
    int total_days = 0;
    for (int i = 1; i < m; i++)
        total_days += days_in_month[i];  // 해당 월 이전의 모든 일수를 더함
    total_days += d;  // 해당 월의 일수 추가
    return total_days;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    char A[4];
    
    // 입력 받기
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);
    
    // 요일 배열 (0: 월요일, 6: 일요일)
    const char* week_days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    // A가 몇 번째 요일인지를 찾음
    int target_day = 0;
    for (int i = 0; i < 7; i++) {
        if (strcmp(A, week_days[i]) == 0) {
            target_day = i;
            break;
        }
    }
    
    // 첫 번째 날짜로부터 총 일수 계산
    int total_days1 = NumOfDays(m1, d1);
    int total_days2 = NumOfDays(m2, d2);
    
    // 날짜 차이 계산
    int diff_days = total_days2 - total_days1 + 1;  // 시작일 포함
    
    // 첫 번째 날짜가 월요일이므로, 시작 요일 계산 (월요일이 0번째)
    int start_day_of_week = 0;  // 월요일
    
    // 지정된 요일이 해당 범위 내에서 몇 번 등장하는지 계산
    int count = 0;
    for (int i = 0; i < diff_days; i++) {
        if ((start_day_of_week + i) % 7 == target_day)
            count++;
    }
    
    // 결과 출력
    printf("%d\n", count);
    
    return 0;
}