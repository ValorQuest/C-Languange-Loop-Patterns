#include<stdio.h>
int main()
{
	int a;
	char c1=' ',c2=' ',c3=' ',c4=' ',c5=' ',c6=' ',c7=' ',c8=' ',c9=' ';
	loop:
	for(a=1;a<=5;a++)
	{
		if(a%2==0)
			printf("---------");
		else
			if(a==1)
				printf("%c |%c |%c ",c1,c2,c3);
			else
				if(a==3)
					printf("%c |%c |%c ",c4,c5,c6);
				else
					if(a==5)
						printf("%c |%c |%c ",c7,c8,c9);
		printf("\n");
	}
	printf("imput your position\n");
	int pos;
	scanf("%d",&pos);
	if(pos==1) c1='x';
	if(pos==2) c2='x';
	if(pos==3) c3='x';
	if(pos==4) c4='x';
	if(pos==5) c5='x';
	if(pos==6) c6='x';
	if(pos==7) c7='x';
	if(pos==8) c8='x';
	if(pos==9) c9='x';
	goto loop;
	return 0;
}