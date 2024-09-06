#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    int arr[100]; 
    int even[100]; 
    int count = 0; 
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even[count] = arr[i];
            count++;
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}