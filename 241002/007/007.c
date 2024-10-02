#include <stdio.h>
#include <string.h>

struct Meeting {
    char secretCode[11]; 
    char meetingPoint;
    int time;
};
int main() {
    // 여기에 코드를 작성해주세요.
    struct Meeting m;

    scanf("%s %c %d", m.secretCode, &m.meetingPoint, &m.time);
    
    printf("secret code : %s\n", m.secretCode);
    printf("meeting point : %c\n", m.meetingPoint);
    printf("time : %d\n", m.time);

    return 0;
}