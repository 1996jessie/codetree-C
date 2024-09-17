#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 
    
    char arr[20][21]; 

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    
    char start;
    scanf(" %c", &start);
    
    int count = 0;
    int length = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i][0] == start) {
            count++;
            length += strlen(arr[i]);
        }
    }
    
    double average = (double)length / count;
    
    printf("%d %.2lf\n", count, average);
    
    return 0;
}