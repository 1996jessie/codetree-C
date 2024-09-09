#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;

    scanf("%d %d", &n, &q);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < q; i++) {
        int t;
        scanf("%d", &t);
        
        if (t == 1) {
            int a;
            scanf("%d", &a);
            printf("%d\n", arr[a - 1]);  
        } 
        else if (t == 2) {
            int b;
            scanf("%d", &b);
            bool flag = false;
            for (int j = 0; j < n; j++) {
                if (arr[j] == b) {
                    printf("%d\n", j + 1);  
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                printf("0\n");
            }
        } 
        else if (t == 3) {
            int s, e;
            scanf("%d %d", &s, &e);
            for (int j = s - 1; j < e; j++) {  
                if (j > s - 1) {
                    printf(" ");
                }
                printf("%d", arr[j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}