#include <stdio.h>
#include <conio.h>

void main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int val, i, pos, temp, n = 5;
	clrscr();
	printf("Elements of array A before insertion : \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("Enter the element to be inserted into array A : ");
	scanf("%d", &val);
	printf("Enter the index of the element :");
	scanf("%d", &pos);
	temp = n;
	While(temp - 1 >= pos)
	{
		a[temp + 1] = a[temp];
		temp--;
	}
	a[temp] = val;
	n = n + 1;
	printf("Elements of array A after insertion : \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
}
