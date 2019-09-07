#include <stdio.h>
int main()
{int z;int i,j;
/*	int x=15;
	int y=20;
	printf("Enter a number 15 or 20 \n");
	scanf("%d",&z);
	if(x<y)
		printf("y= %d is greater \n",y);
	else 
		printf("x= s%d is greater \n ",x);
	
	
	switch(z){
		case 15: printf("You entered x value\n");
		break;
		case 20: printf("you entered y value \n");
		break;
		default: printf(" Damn  you should have entered 15 or 20");
		
	}  */

for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++){
printf("* ");
}
printf("\n");
}

for(i=4;i>=1;i--)
{
for(j=1;j<=i;j++){
printf("* ");
}
printf("\n");
}
return 0;
	
}