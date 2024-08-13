#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a;
    int sum = 0;
    double avg;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &a);
        sum += a;
    }
    avg = (double)sum / n;
    printf("%d %.1lf", sum, avg);
    return 0;
}