#include <stdio.h>
#include <conio.h>

void main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int i, pos, n = 5;
	clrscr();
	printf("Before Deletion elements of Arrays are as below:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}

	printf("Enter the position of element to delete: ");
	scanf("%d", &pos);
	while (pos <= n - 1)
	{
		a[pos] = a[pos + 1];
		pos++;
	}
	n = n - 1;
	printf("Array Elements after deletion:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
}
