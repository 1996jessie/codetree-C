#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    int i = 1;
    int q = n / i;
    while(q > 1) {
        q = q / i;
        i++;
        count++;
    }
    printf("%d", count);

}