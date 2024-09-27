#include <stdio.h>

int isLeapYear(int Y) {
    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
        return 1; 
    }
    return 0; 
}

int isValidDate(int Y, int M, int D) {
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(Y)) {
        daysInMonth[1] = 29;
    }

    if (M < 1 || M > 12) {
        return 0;
    }

    if (D >= 1 && D <= daysInMonth[M - 1]) {
        return 1; 
    }
    
    return 0;
}

void printSeason(int month) {
    if (month >= 3 && month <= 5) {
        printf("Spring\n");
    } else if (month >= 6 && month <= 8) {
        printf("Summer\n");
    } else if (month >= 9 && month <= 11) {
        printf("Fall\n");
    } else {
        printf("Winter\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;

    scanf("%d %d %d", &Y, &M, &D);

    if (isValidDate(Y, M, D)) {
        printSeason(M);
    } else {
        printf("-1\n");
    }

    return 0;
}