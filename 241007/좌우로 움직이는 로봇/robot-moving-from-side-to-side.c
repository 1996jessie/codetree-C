#include <stdio.h>

#define MAX_T 1000000

int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);

    int time_a = 1;
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        
        while (t--) {
            if (d == 'R')
                pos_a[time_a] = pos_a[time_a - 1] + 1;
            else
                pos_a[time_a] = pos_a[time_a - 1] - 1;
            
            time_a++;
        }
    }

    int time_b = 1;
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        
        while (t--) {
            if (d == 'R')
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            else
                pos_b[time_b] = pos_b[time_b - 1] - 1;
            
            time_b++;
        }
    }

	if (time_a < time_b) {
		for (int i = time_a; i < time_b; i++) {
			pos_a[i] = pos_a[i - 1];
		}
	} else if (time_a > time_b) {
		for (int i = time_b; i < time_a; i++) {
			pos_b[i] = pos_b[i - 1];
		}
	}

    int cnt = 0;
    int time_max = (time_a < time_b) ? time_b : time_a;
	
    for (int i = 1; i < time_max; i++) {
        if (pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1])
            cnt++;
    }
    
    printf("%d\n", cnt);
    return 0;
}