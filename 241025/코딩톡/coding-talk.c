#include <stdio.h>
#include <string.h>

#define MAX_N 26
#define MAX_M 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, p;
    char messages[MAX_M][2]; // 메세지 정보를 저장 (사람, 읽지 않은 수)
    int unreadCount[MAX_M];   // 각 메세지에 대한 읽지 않은 사람 수
    int read[MAX_N] = {0};    // 사람들의 읽음 여부 (0: 읽지 않음, 1: 읽음)

    scanf("%d %d %d", &n, &m, &p);
    for (int i = 0; i < m; i++) {
        scanf(" %c %d", &messages[i][0], &unreadCount[i]);
    }

    // p번째 메세지를 보낸 사람
    char sender = messages[p - 1][0];

    // p번째 메세지 이후의 모든 메세지 확인
    for (int i = p; i < m; i++) {
        read[messages[i][0] - 'A'] = 1; // 해당 메세지를 보낸 사람은 읽음
    }

    // p번째 메세지에 대한 읽지 않은 사람 수에 따라 처리
    for (int i = 0; i < p - 1; i++) {
        int unread = unreadCount[i];
        for (int j = 0; j < unread; j++) {
            read[messages[i][0] - 'A'] = 1; // 읽지 않은 사람으로 표시
        }
    }

    // 가능한 사람들을 확인
    int possible[MAX_N];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!read[i]) {
            possible[count++] = i; // 읽지 않았던 사람
        }
    }

    // 결과 출력
    for (int i = 0; i < count; i++) {
        printf("%c ", 'A' + possible[i]);
    }
    printf("\n");

    return 0;
}