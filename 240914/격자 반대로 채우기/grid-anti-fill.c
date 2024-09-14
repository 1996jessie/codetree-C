#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int num[10][10]={{0}};
    int len=1;

    for(int j=n-1; j>=0; j--){
        if(j%2==0){
            for(int i=0; i<n; i++){
                num[i][j]=len++;
            }
        }
        else{
            for(int i=n-1; i>=0; i--){
                num[i][j]=len++;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}