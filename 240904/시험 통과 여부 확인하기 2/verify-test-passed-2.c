#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num; 
    scanf("%d", &num); 
    
    int count = 0;
    int arr[4];

    for (int i = 0; i < num; i++) {
        int sum = 0;
        
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        
        double avg = sum / 4.0;
        
        if (avg >= 60.0) {
            printf("pass\n");
            count++;
        } else {
            printf("fail\n");
        }
    }

    printf("%d\n", pass_count);

    return 0;
}