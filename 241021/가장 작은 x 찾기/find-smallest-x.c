#include <stdio.h>

#define MAX_N 10
#define MAX_NUM 10000

int n;
int a[MAX_N], b[MAX_N];

int Satisfy(int x) {
    for(int i = 0; i < n; i++) {
        x *= 2;
        if(x < a[i] || x > b[i])
            return 0; 
    }
    return 1; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d %d", &a[i], &b[i]);

    for(int x = 1; x <= MAX_NUM; x++)
        if(Satisfy(x)) {
            printf("%d\n", x);
            break;
        }
        
    return 0;
}