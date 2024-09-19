#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];  // 문자열의 최대 길이가 20이므로 배열 크기를 21로 설정 (널 문자 포함)
    scanf("%s", str);

    bool ee = strstr(str, "ee") != NULL;
    bool ab = strstr(str, "ab") != NULL;
    
    if (ee) {
        printf("Yes ");
    } else {
        printf("No ");
    }
    
    if (ab) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}