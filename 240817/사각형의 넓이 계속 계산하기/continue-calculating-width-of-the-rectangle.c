#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    char c;
    while(1) {
        scanf("%d %d %c", &a, &b, &c);
        int area = a * b;  
        printf("%d\n", area);  
        
        if (c == 'C') { 
            break;  
        }
    }
    return 0;
}