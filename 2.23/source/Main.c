#include <stdio.h>

int main(void) {


	int a, b, c;

	printf("�п�J�T�ӼƦr�G");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b) {
		if (a >= c) {
			printf("��J�̤j���Ʀr�� : %d\n", a);
			if (b >= c) {
				printf("��J�̤p���Ʀr�� : %d\n", c);
			}
			else {
				printf("��J�̤p���Ʀr�� : %d\n", b);
			}
		}
		else {
			printf("��J�̤j���Ʀr�� : %d\n", c);
			printf("��J�̤p���Ʀr�� : %d\n", b);
		}
	}
	else {
		if (b >= c) {
			printf("��J�̤j���Ʀr�� : %d\n", b);
			if (a >= c) {
				printf("��J�̤p���Ʀr�� : %d\n", c);
			}
			else {
				printf("��J�̤p���Ʀr�� : %d\n", a);
			}
		}
		else {
			printf("��J�̤j���Ʀr�� : %d\n", c);
			printf("��J�̤p���Ʀr�� : %d\n", a);
		}

	}

	return 0;
}