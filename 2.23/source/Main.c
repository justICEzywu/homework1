#include <stdio.h>

int main(void) {


	int a, b, c;

	printf("叫块计");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b) {
		if (a >= c) {
			printf("块程计 : %d\n", a);
			if (b >= c) {
				printf("块程计 : %d\n", c);
			}
			else {
				printf("块程计 : %d\n", b);
			}
		}
		else {
			printf("块程计 : %d\n", c);
			printf("块程计 : %d\n", b);
		}
	}
	else {
		if (b >= c) {
			printf("块程计 : %d\n", b);
			if (a >= c) {
				printf("块程计 : %d\n", c);
			}
			else {
				printf("块程计 : %d\n", a);
			}
		}
		else {
			printf("块程计 : %d\n", c);
			printf("块程计 : %d\n", a);
		}

	}

	return 0;
}