#include <stdio.h>

int main(void)
{
	int i, i2, i3;

	printf("number  aquare  cube\n");
	for (i = 0; i <= 10; i++) {
		i2 = i * i;
		i3 = i * i * i;
		printf("%d\t%d\t%d\n", i, i2, i3);

	}


	return 0;
}