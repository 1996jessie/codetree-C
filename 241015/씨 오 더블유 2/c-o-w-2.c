#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    char str[101];
    scanf("%s", str);
    
    long long c_count = 0;  
    long long cow_count = 0;  
    long long co_count = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'C') {
            c_count++; 
        } else if (str[i] == 'O') {
            co_count += c_count;  
        } else if (str[i] == 'W') {
            cow_count += co_count;  
        }
    }
    
    printf("%lld\n", cow_count);  
    return 0;
}