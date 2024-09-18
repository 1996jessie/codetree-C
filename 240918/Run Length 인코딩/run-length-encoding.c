#include <stdio.h>
#include <string.h>

char str_a[1001];
char ans[2001];
int len_a;
int cnt;

int main() {
    scanf("%s", str_a);

    len_a = strlen(str_a);

    char curr_char = str_a[0];
    int num_char = 1;
    for(int i = 1; i < len_a; i++){
        if(str_a[i] == curr_char){
            num_char++;
        }
        else {
            ans[cnt++] = curr_char;

            char mystr[10];
            sprintf(mystr, "%d", num_char);
            strcat(ans, mystr);
            cnt = strlen(ans);

            curr_char = str_a[i];
            num_char = 1;
        }
    }

    ans[cnt++] = curr_char;

    char mystr[10];
    sprintf(mystr, "%d", num_char);
    strcat(ans, mystr);
    cnt = strlen(ans);

    printf("%d\n%s", cnt, ans);

    return 0;
}