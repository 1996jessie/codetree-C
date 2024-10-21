#include <stdio.h>
#include <string.h>

#define MAX_N 21

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int calculateMinDistance(char seats[], int n) {
    int lastOccupied = -1;
    int minDist = MAX_N; 

    for (int i = 0; i < n; i++) {
        if (seats[i] == '1') {
            if (lastOccupied != -1) {
                minDist = min(minDist, i - lastOccupied);
            }
            lastOccupied = i;
        }
    }
    
    return minDist;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char seats[MAX_N];

    scanf("%d", &n);
    scanf("%s", seats);

    int maxMinDistance = 0;

    for (int i = 0; i < n; i++) {
        if (seats[i] == '0') {
            seats[i] = '1';

            int currentMinDistance = calculateMinDistance(seats, n);
            maxMinDistance = max(maxMinDistance, currentMinDistance);

            seats[i] = '0';
        }
    }

    printf("%d\n", maxMinDistance);
    
    return 0;
}