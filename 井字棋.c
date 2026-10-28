#include<stdio.h>
int main()
{
	int a,turn,pos;
	turn=1;
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
	printf("input your position\n");
	scanf("%d",&pos);
	if(turn==1)
	{
	
		if(pos==1) c1='x';
		if(pos==2) c2='x';
		if(pos==3) c3='x';
		if(pos==4) c4='x';
		if(pos==5) c5='x';
		if(pos==6) c6='x';
		if(pos==7) c7='x';
		if(pos==8) c8='x';
		if(pos==9) c9='x';
		turn=2;
	}
	else if(turn==2)
		{
			if(pos==1) c1='o';
			if(pos==2) c2='o';
			if(pos==3) c3='o';
			if(pos==4) c4='o';
			if(pos==5) c5='o';
			if(pos==6) c6='o';
			if(pos==7) c7='o';
			if(pos==8) c8='o';
			if(pos==9) c9='o';
			turn=1;
		}
	goto loop;
	return 0;
}