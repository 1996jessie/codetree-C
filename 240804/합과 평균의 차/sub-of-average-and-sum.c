#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double sum, avg;
    sum = (double)a + b + c;
    avg = (double)sum / 3;
    printf("%.0lf\n%.0lf\n%.0lf\n", sum, avg, sum - avg);
    return 0;
}