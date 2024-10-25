#include <stdio.h>

#define MAX_M 100

int n, p, m;
char c[MAX_M];
int u[MAX_M];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d %d", &n, &m, &p);
    for(int i = 0; i < m; i++)
        scanf(" %c %d", &c[i], &u[i]);

    if(u[p - 1] == 0)
        return 0;

    for(int i = 0; i < n; i++) {
        char person = 'A' + i;
        int read = 0;

        for(int j = 0; j < m; j++)
            if(u[j] >= u[p - 1] && c[j] == person)
                read = 1;

        if(read == 0)
            printf("%c ", person);
    }

    return 0;
}