#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_K 10000

int n, k;
int arr[MAX_N];

int GetCost(int low, int high) {
    int cost = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < low) {
            cost += low - arr[i];
        }
        else if(arr[i] > high) {
            cost += arr[i] - high;
        }
    }

    return cost;
}


int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = INT_MAX;

    for(int num = 1; num <= MAX_K; num++) {
        int currentCost = GetCost(num, num + k);
        if(currentCost < ans) {
            ans = currentCost;
        }
    }

    printf("%d\n", ans);

    return 0;
}