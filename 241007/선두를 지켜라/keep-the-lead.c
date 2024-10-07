#include <stdio.h>

#define MAX_T 1000000

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &m);
    
    int time_a = 1;
    for(int i = 0; i < n; i++) {
        int v, t;
        scanf("%d %d", &v, &t);
        
        while(t--) {
            pos_a[time_a] = pos_a[time_a - 1] + v;
            time_a++;
        }
    }
    
    int time_b = 1;
    for(int i = 0; i < m; i++) {
        int v, t;
        scanf("%d %d", &v, &t);
        
        while(t--) {
            pos_b[time_b] = pos_b[time_b - 1] + v;
            time_b++;
        }
    }
    
    int leader = 0, ans = 0;
    for(int i = 1; i < time_a; i++) {
        if(pos_a[i] > pos_b[i]) {
            if(leader == 2)
                ans++;
            leader = 1; 
        }
        else if(pos_a[i] < pos_b[i]) {
            if(leader == 1)
                ans++;
            leader = 2; 
        }
    }
    
    printf("%d\n", ans);
    return 0;
}