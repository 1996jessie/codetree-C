#include <stdio.h>

#define MAX_N 100

int n;
int blocks[MAX_N];


int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &blocks[i]);

    int idx = n - 2;
    while(idx >= 0 && blocks[idx] < blocks[idx + 1])
        idx--;

    printf("%d", idx + 1);
    return 0;
}