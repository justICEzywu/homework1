#include <stdio.h>

int main(void) {


	int a;

	printf("請輸入一個整數：");
	scanf("%d", &a);
	if (a % 2) {
		printf("%d 是奇數\n", a);
	}
	else {
		printf("%d 是偶數\n", a);
	}



	return 0;
}