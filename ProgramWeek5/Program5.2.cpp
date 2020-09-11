#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main()
{
	int x,y=3;
	printf("Enter Number:");
	scanf("%d", &x);
	printf("2,3,5");
	for (int i = 6; i <= x; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
		{
			printf(",%d", i);
			y += 1;
			//Sleep(500);
		}
	}
	printf("\n");
	printf("last sequence = %d", y);






	return 0;
}
