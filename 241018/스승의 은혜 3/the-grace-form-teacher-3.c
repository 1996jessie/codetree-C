#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

struct Student {
    int price;
    int shipping;
};

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    scanf("%d %d", &n, &b);
    
    struct Student students[MAX_N];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &students[i].price, &students[i].shipping);
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int temp[MAX_N];

        for (int j = 0; j < n; j++) {
            if (j == i) {
                temp[j] = students[j].price / 2 + students[j].shipping; 
            } else {
                temp[j] = students[j].price + students[j].shipping;
            }
        }

        qsort(temp, n, sizeof(int), compare);

        int price = 0;
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (price + temp[j] > b) {
                break;
            }
            price += temp[j];
            cnt++;
        }

        if (cnt > ans) {
            ans = cnt;
        }
    }

    printf("%d\n", ans);
    return 0;
}