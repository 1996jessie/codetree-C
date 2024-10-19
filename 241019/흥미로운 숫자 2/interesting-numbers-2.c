#include <stdio.h>

int is_interesting(int num) {
    int digit_count[10] = {0}; 
    int digits[7];  
    int len = 0;    // 자릿수 길이

    // 숫자를 자릿수 단위로 분리하여 배열에 저장
    int temp = num;
    while (temp > 0) {
        digits[len++] = temp % 10;
        digit_count[digits[len - 1]]++;
        temp /= 10;
    }

    // 동일한 숫자가 n자리 있는지 확인
    int same_digit_count = 0;
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 1) {
            same_digit_count++;
        }
    }

    // 흥미로운 숫자는 정확히 한 자리만 다른 숫자여야 함
    if (same_digit_count == len - 1) {
        return 1;
    }

    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int X, Y;
    int interesting_count = 0;

    // 입력 받기
    scanf("%d %d", &X, &Y);

    // X부터 Y까지 탐색하면서 흥미로운 숫자 찾기
    for (int i = X; i <= Y; i++) {
        if (is_interesting(i)) {
            interesting_count++;
        }
    }

    // 결과 출력
    printf("%d\n", interesting_count);

    return 0;
}