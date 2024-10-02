#include <stdio.h>
#include <string.h>

struct Person {
    char name[11];
    char address[11]; 
    char city[11];  
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    struct Person persons[10]; 
    struct Person slowest; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", persons[i].name, persons[i].address, persons[i].city);
    }

    slowest = persons[0];

    for (int i = 1; i < n; i++) {
        if (strcmp(persons[i].name, slowest.name) > 0) {
            slowest = persons[i];
        }
    }

    // 출력
    printf("name %s\n", slowest.name);
    printf("addr %s\n", slowest.address);
    printf("city %s\n", slowest.city);

    return 0;
}