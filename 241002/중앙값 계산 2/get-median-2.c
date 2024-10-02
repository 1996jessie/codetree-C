#include <stdio.h>
#include <stdlib.h>

void insert(int arr[], int n, int value) {
    arr[n] = value;
    for (int i = n; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        } else {
            break;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int numbers[100]; 
    int currentSize = 0;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        
        insert(numbers, currentSize, value);
        currentSize++;
        
        if (currentSize % 2 == 1) {
            int medianIndex = currentSize / 2; 
            printf("%d ", numbers[medianIndex]);
        }
    }
    printf("\n");
    
    return 0;
}