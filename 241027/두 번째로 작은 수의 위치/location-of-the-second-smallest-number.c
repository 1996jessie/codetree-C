#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int n;
int a[MAX_N + 1];

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    
    int myarr[MAX_N + 1] = {0};
    for(int i = 1; i <= n; i++) {
        myarr[i] = a[i];
    }
    qsort(myarr + 1, n, sizeof(int), compare);
    
    int isexist = 0;
    int low2 = 0;
    for(int i = 1; i <= n; i++) {
        if(myarr[i] != myarr[1]) {
            low2 = myarr[i];
            isexist = 1;
            break;
        }
    }

    if(isexist == 0) {
        printf("-1\n");
        return 0;
    }

    int ansidx = -1;
    for(int i = 1; i <= n; i++) {
        if(a[i] == low2) {
            if(ansidx != -1) {
                printf("-1\n");
                return 0;
            }
            ansidx = i;
        }
    }

    printf("%d\n", ansidx);

    return 0;
}