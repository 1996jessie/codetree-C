#include <stdio.h>
#include <string.h>

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char seats[MAX_N + 1];

    scanf("%d", &n);
    scanf("%s", seats);

    int max_distance = 0;
    int last_one = -1;

    for (int i = 0; i < n; i++) {
        if (seats[i] == '1') {
            if (last_one == -1) {
                int distance = i;
                max_distance = (distance + 1) / 2;
            } else {
                int distance = i - last_one;
                max_distance = (max_distance > (distance + 1) / 2) ? max_distance : (distance + 1) / 2;
            }
            last_one = i;
        }
    }

    int distance = n - last_one - 1;
    max_distance = (max_distance > distance) ? max_distance : distance;

    printf("%d\n", max_distance);
    
    return 0;
}