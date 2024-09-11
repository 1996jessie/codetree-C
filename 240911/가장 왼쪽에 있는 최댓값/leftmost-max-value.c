#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int now_index = N; 
    while (now_index > 0) {
        int max_value = arr[0];
        int max_index = 0;
        
        for (int i = 1; i < now_index; i++) {
            if (arr[i] > max_value) {
                max_value = arr[i];
                max_index = i;
            }
        }

        printf("%d ", max_index + 1);

        now_index = max_index;
    }

    return 0;
}