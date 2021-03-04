#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	
	printf("Enter the two numbers which you want to add : \n");
	scanf("%d %d",&x,&y);
	
	while(y!=0)
	{
		x++;
		y--;
	}
	printf("Sum of two values is : %d",x);
	return 0;
}
