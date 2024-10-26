#include <stdio.h>
#include <stdlib.h>

#define MAX_N 3

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 3;
    int a[MAX_N];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), compare);

    if(a[0] + 1 == a[1] && a[1] + 1 == a[2])
        printf("0");
    else if(a[0] + 2 == a[1] || a[1] + 2 == a[2])
        printf("1");
    else
        printf("2");

    return 0;
}