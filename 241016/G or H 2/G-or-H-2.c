#include <stdio.h>

typedef struct {
    int position;
    char flag;
} Person;


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    
    Person people[100];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %c", &people[i].position, &people[i].flag);
    }

    int max_size = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int g_count = 0, h_count = 0;
            int min_pos = people[i].position;
            int max_pos = people[i].position;

            for (int k = i; k <= j; k++) {
                if (people[k].flag == 'G') {
                    g_count++;
                } else if (people[k].flag == 'H') {
                    h_count++;
                }
                if (people[k].position < min_pos) {
                    min_pos = people[k].position;
                }
                if (people[k].position > max_pos) {
                    max_pos = people[k].position;
                }
            }

            if (g_count == 0 || h_count == 0) {
                int size = max_pos - min_pos;
                if (size > max_size) {
                    max_size = size;
                }
            }

            if (g_count == h_count && g_count > 0) {
                int size = max_pos - min_pos;
                if (size > max_size) {
                    max_size = size;
                }
            }
        }
    }

    printf("%d\n", max_size);

    return 0;
}