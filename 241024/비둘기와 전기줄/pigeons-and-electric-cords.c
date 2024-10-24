#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    // 비둘기의 위치를 저장할 배열 (0: 왼쪽, 1: 오른쪽)
    int position[11] = {0}; // 비둘기 번호는 1부터 10까지 사용하므로 배열 크기는 11

    int crossings = 0; // 도로를 건넌 횟수

    for (int i = 0; i < N; i++) {
        int pigeon, loc;
        scanf("%d %d", &pigeon, &loc);

        // 현재 비둘기의 위치가 이전 위치와 다르면 길을 건넜다고 판단
        if (position[pigeon] != loc) {
            crossings++; 
            position[pigeon] = loc; 
        }
    }

    printf("%d\n", crossings);
    return 0;
}