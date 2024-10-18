#include <stdio.h>

#define MAX_N 10
#define MAX_A 100

int n;
int l[MAX_N], r[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d %d", &l[i], &r[i]);
    
    int ans = 0;
    
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++) {
                int overlap = 0;
                int arr[MAX_A + 1] = {0}; 
                
                for(int x = 0; x < n; x++) {
                    if(x == i || x == j || x == k)
                        continue;
                    
                    for(int y = l[x]; y <= r[x]; y++)
                        arr[y]++;
                }
                
                for(int x = 0; x <= MAX_A; x++)
                    if(arr[x] > 1)
                        overlap = 1;
                
                if(overlap == 0)
                    ans++;
            }
    
    printf("%d\n", ans);
    
    return 0;
}