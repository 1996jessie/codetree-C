#include <stdio.h>

#define MAX_N 100

int n;
int x[MAX_N], y[MAX_N];

int calculate_max_points_in_zone(int x_line, int y_line) {
    int zone[4] = {0, 0, 0, 0}; 

    for (int i = 0; i < n; i++) {
        if (x[i] > x_line && y[i] > y_line) {
            zone[0]++; 
        } else if (x[i] < x_line && y[i] > y_line) {
            zone[1]++; 
        } else if (x[i] < x_line && y[i] < y_line) {
            zone[2]++; 
        } else {
            zone[3]++; 
        }
    }

    int max_points = zone[0];
    for (int i = 1; i < 4; i++) {
        if (zone[i] > max_points) {
            max_points = zone[i];
        }
    }

    return max_points;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int min_max_points = n;

    for (int x_line = 2; x_line <= 100; x_line += 2) {
        for (int y_line = 2; y_line <= 100; y_line += 2) {
            int max_points = calculate_max_points_in_zone(x_line, y_line);
            if (max_points < min_max_points) {
                min_max_points = max_points;
            }
        }
    }

    printf("%d\n", min_max_points);

    return 0;
}