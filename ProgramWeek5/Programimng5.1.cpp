#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<Windows.h>
int random_between(int min, int max)
{
	int r = (rand() / (float)RAND_MAX) * (max + 1) + min;
	return r > max ? max : r;
}

int main()
{
	int i = 1;
	char x, wel[] = {'W','e','l','C' ,'o' ,'m' ,'e',' ','T','o',' ','R','a','n','d','o','m'};
	srand(time(NULL));
	for (int j=0;j<=16;j++)
	{
		printf("%c", wel[j]);
		Sleep(100);
	}
	printf("\n");
	printf("Enter Your String: ");
	scanf("%c", &x);		
	while (i<=10)
	{
		if (x == 's' || x == 'S')
		{
			printf("End Program");
			break;
		}
		if (x == 'a' || x == 'A')
		{
			printf("%d\n", random_between(80, 100));				
		}
		if (x == 'b' || x == 'B')
		{
			printf("%d\n", random_between(70, 80));
		}
		if (x == 'c' || x == 'C')
		{
			printf("%d\n", random_between(60, 70));
		}
		if (x == 'd' || x == 'D')
		{
			printf("%d\n", random_between(50, 60));
		}
		if (x == 'e' || x == 'E')
		{
			printf("%d\n", random_between(0, 50));
		}
	
		i++;
		Sleep(500);
	}

	return 0;
}