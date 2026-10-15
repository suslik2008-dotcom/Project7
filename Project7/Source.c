#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_NO_DEFINES
#include <math.h>
#include <stdio.h>
#include <locale.h>
void main()
{
	double x, n = 40;
	printf("Введите перепад давления(в бар) >> ");
	scanf("%lf", &x);
	if (x < 0.5)
	{
		double q = pow(x-0.5, 2)/1 + 8;
		printf("%lf", q);
	}

	if (0.5 <= x <= 2)
	{
		double q = 2 * pow(x-1.25+2, 0.5) + 42;
		printf("%lf", q);
	}

	if (x > 2)
	{
		double q=3*(x-2)+60;
		printf("%lf", q);
	}
}