#include <stdio.h>

#define DIR_NUM 8

int arr[19][19];

int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {-1, 0, 1, -1, 0, 1, -1, 1};

int InRange(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < 19; i++)
        for(int j = 0; j < 19; j++)
            scanf("%d", &arr[i][j]);
    
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19; j++) {
            if(arr[i][j] == 0) continue;  
            
            for(int k = 0; k < DIR_NUM; k++) {
                int curt = 1;  
                int curx = i;
                int cury = j;

                while(1) {
                    int nx = curx + dx[k];
                    int ny = cury + dy[k];
                    if(InRange(nx, ny) == 0) break;  
                    if(arr[nx][ny] != arr[i][j]) break;  
                    
                    curt++;  
                    curx = nx;
                    cury = ny;
                }

                if(curt == 5) {
                    printf("%d\n", arr[i][j]); 
                    printf("%d %d\n", i + 2 * dx[k] + 1, j + 2 * dy[k] + 1);
                    return 0;
                }
            }
        }
    }
    
    printf("0\n");  
    return 0;
}