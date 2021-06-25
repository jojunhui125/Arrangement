#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 


int main(void)
{
	int a[10];
	int num[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int n = 42;
	int number = 0;



	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		num[i] = a[i] % n;
	}

	for (int i = 0; i < 10; i++)
	{
		int cnt = 0;

		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j])
			{
				cnt++;
			}
				
		}
		if (cnt == 0)
		{
			number++;
		}
		
	}

	printf("%d", number);

}