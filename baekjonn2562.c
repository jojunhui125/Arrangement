#include <stdio.h>


int main(void)
{
	int a[9];
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (max == a[i])
		{
			printf("%d\n%d", max,i+1);
			break;
		}
	}

	return 0;
}