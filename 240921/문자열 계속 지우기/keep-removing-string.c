#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101];  // A 문자열 (최대 100자)
    char B[101];  // B 문자열 (최대 100자)
    scanf("%s", A);  // 문자열 A 입력
    scanf("%s", B);  // 문자열 B 입력

    int lenA = strlen(A);  // A의 길이
    int lenB = strlen(B);  // B의 길이

    // B가 A에서 발견될 때까지 반복
    while (1) {
        int found = 0;  // B의 발견 여부
        for (int i = 0; i <= lenA - lenB; i++) {
            // A[i]에서 시작하여 B와 비교
            int j;
            for (j = 0; j < lenB; j++) {
                if (A[i + j] != B[j]) {
                    break;  // 다르면 중단
                }
            }
            if (j == lenB) {  // B가 발견된 경우
                found = 1;  // 발견 표시
                // B를 A에서 제거
                for (int k = i; k <= lenA - lenB; k++) {
                    A[k] = A[k + lenB];  // 뒤로 이동
                }
                lenA -= lenB;  // A의 길이 감소
                A[lenA] = '\0';  // 문자열 종료
                break;  // 반복문을 종료하고 다시 검색
            }
        }
        if (!found) {
            break;  // B가 더 이상 A에 없으면 종료
        }
    }

    // 최종 결과 출력
    printf("%s\n", A);
    return 0;
}