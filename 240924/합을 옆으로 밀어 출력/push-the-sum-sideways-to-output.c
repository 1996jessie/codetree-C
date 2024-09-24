#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }

    int shiftedSum = sum / 10; 
    int remainder = sum % 10; 

    char result[20];
    sprintf(result, "%d%d", shiftedSum, remainder);

    printf("%s\n", result);

    return 0;
}