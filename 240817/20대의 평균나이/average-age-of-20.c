#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    int count = 0;
    int sum = 0;
    double average;

    while (1) {
        scanf("%d", &age);  
        if (age < 20 || age >= 30) { 
            break;  
        }
        sum += age; 
        count++; 
    }

    if (count > 0) {
        average = (double)sum / count;  
        printf("%.2f\n", average); 
    } 
    return 0;
}