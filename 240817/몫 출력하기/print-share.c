#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
	int cnt = 0;
	int n;
    while(1) {
        scanf("%d", &n);
		
		if(n % 2 == 1)
			continue;		
		printf("%d\n", n / 2);
		cnt++;
		if(cnt >= 3)
			break;
    }
    return 0;
}