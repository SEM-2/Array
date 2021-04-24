#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5] = { 10, 40, 50, 30, 20 };
    int n = 5, i, j, temp;
    clrscr();
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf(“Array Elements in Ascending Order is: \n”);
    for (i = 0; i < 5; i++)
    {
        printf(“\n % d”, a[i]);
        printf(“\n”);
    }
    getch();
}
