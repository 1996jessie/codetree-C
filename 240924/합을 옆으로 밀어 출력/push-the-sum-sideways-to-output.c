#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int sum = 0; 
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num); 
        sum += num; 
    }

    char result[20]; 
    sprintf(result, "%lld", sum);

    char shifted[20];
    int i = 0;

    char temp = result[0];

    while (result[i + 1] != '\0') {
        shifted[i] = result[i + 1]; 
        i++;
    }

    shifted[i] = temp; 
    shifted[i + 1] = '\0'; 

    printf("%s\n", shifted);

    return 0;
}