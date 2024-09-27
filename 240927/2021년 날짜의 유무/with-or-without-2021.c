#include <stdio.h>

int isValidDate(int M, int D) {
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (M < 1 || M > 12) {
        return 0; 
    }

    if (D >= 1 && D <= daysInMonth[M - 1]) {
        return 1;
    }
    
    return 0; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    scanf("%d %d", &M, &D);

    if (isValidDate(M, D)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}