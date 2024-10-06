#include <stdio.h>

int area(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (y2 - y1);
}

int overlap_area(int x1_A, int y1_A, int x2_A, int y2_A, int x1_B, int y1_B, int x2_B, int y2_B) {
    int overlap_x1 = x1_A > x1_B ? x1_A : x1_B;
    int overlap_y1 = y1_A > y1_B ? y1_A : y1_B;
    int overlap_x2 = x2_A < x2_B ? x2_A : x2_B;
    int overlap_y2 = y2_A < y2_B ? y2_A : y2_B; 
    
    if (overlap_x1 < overlap_x2 && overlap_y1 < overlap_y2) {
        return area(overlap_x1, overlap_y1, overlap_x2, overlap_y2);
    }
    return 0; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x1_A, y1_A, x2_A, y2_A;
    int x1_B, y1_B, x2_B, y2_B;
    int x1_M, y1_M, x2_M, y2_M;
    
    scanf("%d %d %d %d", &x1_A, &y1_A, &x2_A, &y2_A);
    scanf("%d %d %d %d", &x1_B, &y1_B, &x2_B, &y2_B);
    scanf("%d %d %d %d", &x1_M, &y1_M, &x2_M, &y2_M);

    int total_A = area(x1_A, y1_A, x2_A, y2_A);
    int total_B = area(x1_B, y1_B, x2_B, y2_B);

    int overlap_A_M = overlap_area(x1_A, y1_A, x2_A, y2_A, x1_M, y1_M, x2_M, y2_M);

    int overlap_B_M = overlap_area(x1_B, y1_B, x2_B, y2_B, x1_M, y1_M, x2_M, y2_M);

    int remaining_area = (total_A - overlap_A_M) + (total_B - overlap_B_M);
    
    printf("%d\n", remaining_area);
    
    return 0;
}