#include <stdio.h>
#include <conio.h>

void main()
{
	int a[5], b[5], c[10], i, j, k = 0;
	clrscr();
	printf("Enter elements of array A :\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter elements of array B :\n");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &b[j]);
	}
	for (i = 0; i < 5; i++)
	{
		c[k] = a[i];
		k++;
	}
	for (j = 0; j < 5; j++)
	{
		c[k] = b[j];
		k++;
	}
	printf("Elements of array C after Merge Operation :\n");
	for (k = 0; k < 10; k++)
	{
		printf("%d\n", c[k]);
	}
	getch();
}
