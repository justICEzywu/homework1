#include <stdio.h>

int main(void) {
	int a, b;
	printf("�п�J��Ӿ�� : ");
	scanf("%d %d", &a, &b);
	if (a % b) {
		printf("%d ���O %d ������", a, b);
	}
	else {
		printf("%d �O %d ������", a, b);
	}


	return 0;
}