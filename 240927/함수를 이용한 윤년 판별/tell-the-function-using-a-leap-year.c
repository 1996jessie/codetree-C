#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    }
    return 0; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    scanf("%d", &y);\
    
    if (isLeapYear(y)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}