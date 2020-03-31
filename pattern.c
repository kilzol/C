/*
code to print diamond pattern
Enter any number5
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

*/

#include <stdio.h>

int main()
{int n;
int x=1;
	printf("Enter any number");
   scanf("%d",&n);
   int y=n;
   for(int i=0;i<n;i++)
   {
	   for(int j=y;j>0;j--)
		   printf(" ");
	   for(int k=0;k<x;k++)
		   printf("*");
	   x=x+2;
	   y=y-1;
	   printf("\n");
   }
   x=x-4;
   for(int i=0;i<n-1;i++)
   {
	   for(int j=0;j<=i+1;j++)
		   printf(" ");
	   for(int k=0;k<x;k++)
		   printf("*");
	   x=x-2;
	   printf("\n");
   }
    return 0;
}
