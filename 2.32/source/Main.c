#include <stdio.h>

int main(void)
{
	double tall, weight, BMI;

	printf("請問你的身高幾公分 : ");
	scanf("%lf", &tall);

	printf("請問你的體重幾公斤 : ");
	scanf("%lf", &weight);

	BMI = weight / ((tall / 100)*(tall / 100));
	printf("BMI %lf\n", BMI);

	printf("Underweight : less than 18.5\n");
	printf("Normal : between 18.5 amd 24.9\n");
	printf("Overweight : between 25 and29.9\n");
	printf("Obese : 30 or greater\n");

	return 0;
}