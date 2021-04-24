#include<stdio.h>

void main()
{
  int a[5],i;

  printf(“Enter the elements :”);
  for(i=0;i<5;i++)
    {
      scanf(“%d”,&a[i]);
    }
    printf(“Elements of array are :\n”);
    
  for(i=0;i<5;i++)
    {
      printf(“Element no %d = %d \n”,i+1,a[i]);
    }

}
