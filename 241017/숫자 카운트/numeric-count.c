#include <stdio.h>

#define MAX_N 10

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[MAX_N], b[MAX_N], c[MAX_N];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }

    int cnt = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                if (i == j || j == k || k == i) {
                    continue;
                }

                int succeeded = 1; // 성공 여부
                for (int q = 0; q < n; q++) {
                    int x = a[q] / 100; 
                    int y = (a[q] / 10) % 10; 
                    int z = a[q] % 10;  
                    int cnt1 = 0, cnt2 = 0;

                    if (x == i) cnt1++;
                    if (y == j) cnt1++;
                    if (z == k) cnt1++;
                    if (x == j || x == k) cnt2++;
                    if (y == i || y == k) cnt2++;
                    if (z == i || z == j) cnt2++;

                    if (cnt1 != b[q] || cnt2 != c[q]) {
                        succeeded = 0; // 실패
                        break;
                    }
                }

                if (succeeded) cnt++;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}