#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main()
{
	int x,y=3;
	char No[] = { 'N','o', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'a', 't', 'e', };
	printf("Enter Number:");
	scanf("%d", &x);
	if (x >= 5)
	{
		printf("2,3,5");
	}
	if (x == 4 || x == 3)
	{
		printf("2,3");
		y -= 1;
	}
	if (x == 2)
	{
		printf("2");
		y -= 2;
	}

	while (true) {
		if (x <= 1)
		{
			for (int j = 0; j <= 11; j++) {
				printf("%c", No[j]);
				Sleep(500);				
			}break;
		}
		for (int i = 6; i <= x; i++)
		{
			if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
			{
				printf(",%d", i);
				y += 1;
				
			}
		}
		printf("\n");
		printf("last sequence = %d\n", y);
		printf("\n\n");
		main();
	}
	
	return 0;
}
