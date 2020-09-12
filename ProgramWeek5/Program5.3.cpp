#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	char end[] = { '-','-','-','¨','º', 'â', '»', 'Ã', 'á', '¡', 'Ã', 'Á','-','-','-' };
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	printf("Enter z: ");
	scanf("%d", &z);
	printf("\n");
	while (true) {
		if (x < 0 || y < 0 || z < 0) { 
			for (int i = 0; i <= 14; i++) { printf("%c", end[i]); }
			break; 
		}
		if (x + y == z)
		{	
			printf("    ");
			printf("+\n\n");
			main();
		}
		if (x - y == z || y - x == z)
		{
			printf("    ");
			printf("-\n\n");
			main();
		}
		if (x * y == z)
		{
			printf("    ");
			printf("*\n\n");
			main();
		}
		if (x / y == z || y / x == z)
		{
			printf("    ");
			printf("/\n\n");
			main();
		}
		if (z == pow(x, y) || z == pow(y,x))
		{
			printf("    ");
			printf("**\n\n");
			main();
		}
		x = 0;
		y = 0;
		z = 1;
		printf("\n");
		main();
	}
	
	return 0;
}