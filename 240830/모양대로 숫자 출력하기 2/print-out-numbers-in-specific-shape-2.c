#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
	int cnt = 2;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", cnt);
			cnt += 2;
			if(cnt == 10)
				cnt = 2;
		}
		printf("\n");
	}
	
	return 0;
}