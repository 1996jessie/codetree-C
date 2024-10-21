#include <stdio.h>

#define MAX_N 100

int n;
int x[MAX_N], y[MAX_N];

int calculate_max_points_in_zone(int x_line, int y_line) {
    int zone[4] = {0, 0, 0, 0}; 
    
    // 각 점을 해당하는 구역에 분배
    for (int i = 0; i < n; i++) {
        if (x[i] > x_line && y[i] > y_line) {
            zone[0]++; // 1사분면
        } else if (x[i] < x_line && y[i] > y_line) {
            zone[1]++; // 2사분면
        } else if (x[i] < x_line && y[i] < y_line) {
            zone[2]++; // 3사분면
        } else {
            zone[3]++; // 4사분면
        }
    }

    // 4개의 구역 중 가장 큰 구역의 점 개수 찾기
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

    int min_max_points = n; // 가장 큰 구역의 점의 최소값을 찾기 위한 초기값

    // 가능한 모든 짝수 x_line과 y_line에 대해 검사
    for (int x_line = 2; x_line <= 100; x_line += 2) {
        for (int y_line = 2; y_line <= 100; y_line += 2) {
            // 각 조합에 대해 가장 큰 구역의 점 개수를 계산
            int max_points = calculate_max_points_in_zone(x_line, y_line);
            // 그 중 최소값을 찾음
            if (max_points < min_max_points) {
                min_max_points = max_points;
            }
        }
    }

    // 결과 출력
    printf("%d\n", min_max_points);

    return 0;
}