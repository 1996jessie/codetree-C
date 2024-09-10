#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int min;
    int count = 0; 
    
    scanf("%d", &N);
    
    int arr[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    count = 1; 

    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
            count = 1;
        } else if (arr[i] == min) {
            count++; 
        }
    }

    printf("%d %d\n", min, count);

    return 0;
}