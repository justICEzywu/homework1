#include <stdio.h>

int main(void)
{
	int a1, b1, c1, d1, e1, f1;
	printf("請問一整天的總里程數 : ");
	scanf("%d", &a1);

	printf("請問汽油一公升/加侖多少錢 : ");
	scanf("%d", &b1);

	printf("請問平均一公升/加侖能行駛多少公里 : ");
	scanf("%d", &c1);

	printf("請問一整天的停車費 : ");
	scanf("%d", &d1);

	printf("請問一整天的通行費(過路費) : ");
	scanf("%d", &e1);

	f1 = d1 + e1 + (b1*(a1 / c1));
	printf("一天的花費為 : %d", f1);


	return 0;
}