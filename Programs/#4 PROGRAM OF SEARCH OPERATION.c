#include <stdio.h>
#include <conio.h>

void main()
	{
		int a[5] = { 10, 20, 30, 40, 50 };
		int val, i, f = 0;
		clrscr();
		printf(ā\nenter element to search in array: ");
				scanf("%d", &val);
				for (i = 0; i < 5; i++)
				{
					if (a[i] == val)
					{
						printf(ā\nElement is found &element is at: a[ % d] = % dā, a[i], val);
						f = 1;
					}
				}
				if (f == 0)
				{
					printf(ā\nElement is not found ");
					}
					getch();
	}
