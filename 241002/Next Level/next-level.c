#include <stdio.h>

struct User {
    char id[11]; 
    int level; 
};

int main() {
    // 여기에 코드를 작성해주세요.
    struct User user1;
    struct User user2; 

    snprintf(user1.id, sizeof(user1.id), "codetree");
    user1.level = 10;

    scanf("%s %d", user2.id, &user2.level);

    printf("user %s lv %d\n", user1.id, user1.level);
    printf("user %s lv %d\n", user2.id, user2.level);

    return 0;
}