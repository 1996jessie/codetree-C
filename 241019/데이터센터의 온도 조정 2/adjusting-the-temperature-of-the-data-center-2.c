#include <stdio.h>

#define MAX_T 1001 

int main() {
    // 여기에 코드를 작성해주세요.
    int N, C, G, H;
    scanf("%d %d %d %d", &N, &C, &G, &H);

    int Ta[MAX_T] = {0}, Tb[MAX_T] = {0}; 

    for (int i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        Ta[i] = a;
        Tb[i] = b;
    }

    int max_workload = 0;

    for (int temp = 0; temp < MAX_T; temp++) {
        int total_workload = 0;

        for (int i = 0; i < N; i++) {
            if (temp < Ta[i]) {
                total_workload += C;
            } else if (temp >= Ta[i] && temp <= Tb[i]) {
                total_workload += G;
            } else {
                total_workload += H;
            }
        }

        if (total_workload > max_workload) {
            max_workload = total_workload;
        }
    }

    printf("%d\n", max_workload);

    return 0;
}