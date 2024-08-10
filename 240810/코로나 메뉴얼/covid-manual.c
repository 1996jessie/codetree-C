#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int t1, t2, t3;
    char s1, s2, s3;
    scanf("%c %d\n", &s1, &t1);
    scanf("%c %d\n", &s2, &t2);
    scanf("%c %d\n", &s3, &t3);
    if(s1 == 'Y' && t1 >= 37) {
        if(s2 == 'Y' && t2 >= 37) {
            printf("E");
        } else if(s3 == 'Y' && t3 >= 37) {
            printf("E");
        } else {
            printf("N");
        }
    } else if(s2 == 'Y' && t2 >= 37) {
        if(s3 == 'Y' && t3 >= 37) {
            printf("E");
        } else {
            printf("N");
        }
    } else {
        printf("N");
    }
    return 0;
}