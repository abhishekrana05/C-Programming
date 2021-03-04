#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,carry;
	
	printf("Enter two numbers which you want to add : \n");
	scanf("%d %d",&x,&y);
	
	while(y!=0)
	{
		carry = x & y;
		x = x ^ y;
		y = carry << 1;
	}
	printf("Addition is : %d",x);
	return 0;
}
