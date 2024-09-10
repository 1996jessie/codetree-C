#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int arr[N];
    int count[1001] = {0}; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++; 
    }

    int max = -1; 

    for (int i = 0; i < N; i++) {
        if (count[arr[i]] == 1 && arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("%d\n", max);

    return 0;
}