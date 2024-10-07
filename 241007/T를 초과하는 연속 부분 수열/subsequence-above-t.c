#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    scanf("%d %d", &n, &t); 
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int max_len = 0;  
    int current_len = 0; 

    // 수열을 순회하며 조건을 만족하는 부분 수열을 찾음
    for (int i = 0; i < n; i++) {
        if (arr[i] > t) {
            current_len++;  // t보다 크면 현재 수열 길이를 증가
        } else {
            // t보다 크지 않으면 현재까지의 길이와 최대 길이를 비교하여 갱신
            if (current_len > max_len) {
                max_len = current_len;
            }
            current_len = 0;  // 새로운 수열을 시작
        }
    }

    // 마지막 수열의 길이를 한 번 더 체크
    if (current_len > max_len) {
        max_len = current_len;
    }

    // 결과 출력
    printf("%d\n", max_len);

    return 0;
}