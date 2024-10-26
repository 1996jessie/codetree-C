#include <stdio.h>

#define MAX_N 3

int main() {
    // 여기에 코드를 작성해주세요.
    int a[MAX_N];
    
    for(int i = 0; i < MAX_N; i++)
        scanf("%d", &a[i]);

    if(a[0] + 1 == a[1] && a[1] + 1 == a[2]) {
        printf("0\n");
        return 0;
    }
    
    int max_move = 0;
    int move = a[2] - a[1] - 1;
    max_move = (max_move > move) ? max_move : move;

    move = a[1] - a[0] - 1;
    max_move = (max_move > move) ? max_move : move;

    printf("%d\n", max_move);
    
    return 0;
}