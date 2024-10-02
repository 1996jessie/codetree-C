#include <stdio.h>

struct Agent {
    char codename[2];
    int score; 
};

int main() {
    // 여기에 코드를 작성해주세요.
    struct Agent agents[5];
    int i, minIndex = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d", agents[i].codename, &agents[i].score);
    }

    for (i = 1; i < 5; i++) {
        if (agents[i].score < agents[minIndex].score) {
            minIndex = i;
        }
    }

    printf("%s %d\n", agents[minIndex].codename, agents[minIndex].score);

    return 0;
}