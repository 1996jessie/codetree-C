#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a[101], b[101];
    char c[201] = {0,}, d[201] = {0,};
	
	scanf("%s", a);
    scanf("%s", b);

	int a_len = strlen(a);
	int b_len = strlen(b);
	
    for(int i = 0; a[i] != '\0'; i++)
        c[i] = a[i];
    for(int i = 0; b[i] != '\0'; i++)
        c[a_len + i] = b[i];
    
    c[a_len + b_len] = '\0';
	
    for(int i = 0; b[i] != '\0'; i++) {
        d[i] = b[i];
    }

    for(int i = 0; a[i] != '\0'; i++) {
        d[b_len + i] = a[i];
    }

    d[a_len + b_len] = '\0';
    
    bool satisfied = true;
    for(int i = 0; c[i] != '\0'; i++) {
        if(c[i] != d[i]) {
            satisfied = false; 
        }
    }
        
	if(satisfied) {
        printf("true");
    } else {
        printf("false");
    }

	
    return 0;
}