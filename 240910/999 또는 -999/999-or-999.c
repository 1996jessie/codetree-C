#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a; 
    int max, min;
    bool flag = true;

    while (1) {
        scanf("%d", &a); 

        if (a == 999 || a == -999) {
            break;
        }

        if (flag) {
            max = min = a;
            flag = false;
        } else {
            if (a > max) {
                max = a;
            }
            if (a < min) {
                min = a;
            }
        }
    }

    printf("%d %d\n", max, min);

    return 0;
}