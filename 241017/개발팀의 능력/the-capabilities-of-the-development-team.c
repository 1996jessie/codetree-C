#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int arr[5];

int abs_val(int x) {
    return (x < 0) ? -x : x;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int getDiff(int i, int j, int k, int w) {
    int sum1 = arr[i] + arr[j];
    int sum2 = arr[k] + arr[w];
    int sum3 = 0;

    for (int x = 0; x < 5; x++) {
        sum3 += arr[x];
    }
    sum3 -= (sum1 + sum2);

    if (sum1 == sum2 || sum2 == sum3 || sum1 == sum3) {
        return -1;
    }

    int res = abs_val(sum1 - sum2);
    res = max(res, abs_val(sum1 - sum3));
    res = max(res, abs_val(sum2 - sum3));

    return res;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int min_diff = INT_MAX; 
    int flag = 1; 

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                for (int w = k + 1; w < 5; w++) {
                    if (i == k || i == w || j == k || j == w) {
                        continue;
                    }
                    int diff = getDiff(i, j, k, w);
                    if (diff != -1) {
                        min_diff = min(min_diff, diff); 
                        flag = 0; 
                    }
                }
            }
        }
    }

    if (flag) {
        printf("-1\n");
    } else {
        printf("%d\n", min_diff); 
    }

    return 0;
}