
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	int array[1000000];

	int Max;
	int Min;

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &array[i]);
	}

	Min = array[0];
	Max = array[0];

	for (int i = 0; i < a; i++)
	{


		if (Max < array[i])
		{
			Max = array[i];
		}

		if (Min > array[i])
		{
			Min = array[i];
		}
	}

	printf("%d %d", Min, Max);
	return 0;

}