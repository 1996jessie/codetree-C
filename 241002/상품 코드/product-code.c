#include <stdio.h>

struct Product {
    char name[11];
    int code; 
};

int main() {
    // 여기에 코드를 작성해주세요.
    struct Product product1 = {"codetree", 50};
    struct Product product2;

    scanf("%s %d", product2.name, &product2.code);

    printf("product %d is %s\n", product1.code, product1.name);
    printf("product %d is %s\n", product2.code, product2.name);

    return 0;
}