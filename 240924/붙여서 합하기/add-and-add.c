#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a[5];
	char b[5];
	char str1[7];
	char str2[7];
	
	scanf("%s", a);
	scanf("%s", b);
	
	int len_a = strlen(a);
	int len_b = strlen(b);
	int tot_idx1 = 0;
	int tot_idx2 = 0;

	for(int i = 0; i < len_a; i++)
		str1[tot_idx1++] = a[i];
	
	for(int i = 0; i < len_b; i++)
		str1[tot_idx1++] = b[i];
	
	for(int i = 0; i < len_b; i++)
		str2[tot_idx2++] = b[i];
	
	for(int i = 0; i < len_a; i++)
		str2[tot_idx2++] = a[i];

	int str1_int = atoi(str1);
	int str2_int = atoi(str2);
	
	printf("%d", str1_int + str2_int);
	
    return 0;
}