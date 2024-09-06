#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    int arr[100];
    int count = 0; 
    int five = 0; 
    int i = 1;

    scanf("%d", &n);

    while (five < 2) { 
        int a = n * i; 

        arr[count] = a;
        count++;

        if (a % 5 == 0) {
            five++;
        }

        i++;
    }

    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}