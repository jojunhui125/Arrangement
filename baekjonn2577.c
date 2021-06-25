#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 


int main(void)
{
	int a, b, c ;
	scanf("%d %d %d", &a, &b, &c);

	int num1[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int num2[10] = { 0 };

	int number = a * b * c;

	for (int i = 0; i < 10; i++)
	{
		num1[i] = number % 10;
		number = number / 10;
		if (number < 1)
		{
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num1[i] == j)
			{
				num2[j]++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", num2[i]);
	}


}