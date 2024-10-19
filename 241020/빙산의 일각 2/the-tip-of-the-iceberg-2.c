#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int heights[100];
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }

    int max_chunks = 0;

    for (int sea_level = 1; sea_level <= 1000; sea_level++) {
        int chunk_count = 0; 
        int in_chunk = 0;

        for (int i = 0; i < N; i++) {
            if (heights[i] > sea_level) {
                if (!in_chunk) {
                    in_chunk = 1; 
                    chunk_count++;
                }
            } else {
                in_chunk = 0; 
            }
        }

        if (chunk_count > max_chunks) {
            max_chunks = chunk_count;
        }
    }

    printf("%d\n", max_chunks);
    return 0; 
}