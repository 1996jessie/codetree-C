#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    	char str[10][201];

  	for(int i = 0; i < 10; i++)
		scanf("%s", str[i]);
	
  	for(int i = 0; i < 10; i += 2)
        printf("%s\n", str[i]);
	
    return 0;
}