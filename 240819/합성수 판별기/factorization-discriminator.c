#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    bool flag = false;
    for(int i=1;i<n;i++) {
        if(n % i == 0) {
            flag = true;
            break;
        }
    }
    if(flag) {
        printf("C");
    } else {
        printf("N");
    }
    return 0;
}