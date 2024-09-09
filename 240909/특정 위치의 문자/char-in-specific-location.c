#include <stdio.h>
#include <stdbool.h>

int main() {
   char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
  
    char a;
    scanf(" %c", &a); 

    bool flag = false;  
    for (int i = 0; i < 6; i++) {
        if (arr[i] == a) {
            printf("%d\n", i);
            flag = true;
            break;
        }
    }
    
    if (!flag) {
        printf("None\n");
    }

    return 0;
}