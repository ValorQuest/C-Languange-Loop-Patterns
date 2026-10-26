#include<stdio.h>
int main()
{
	int a,b,c;
    for(a=1;a<=4;a++)
    {
    	for(b=4-a;b>=1;b--)
    	printf(" ");
    	for(c=1;c<=2*a-1;c++)
    	printf("*");
    	printf("\n");
	}
	return 0;
}