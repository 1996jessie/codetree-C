#include <stdio.h>

void printStars() {
    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n"); 
}

int main() {
    for (int i = 0; i < 5; i++) {
        printStars();
    }

    return 0;
}