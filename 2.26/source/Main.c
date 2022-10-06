#include <stdio.h>

int main(void) {
	int a, b;
	printf("請輸入兩個整數 : ");
	scanf("%d %d", &a, &b);
	if (a % b) {
		printf("%d 不是 %d 的倍數", a, b);
	}
	else {
		printf("%d 是 %d 的倍數", a, b);
	}


	return 0;
}