#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=1;a<=5;a++)
	{
		if(a%2==0)
			printf("---------");
		else
			printf("  |  |   ");
			printf("\n");
	}
	return 0;
}