#include<stdio.h>
int main()
{
	int a,pos,turn;
	char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
	turn=1;
	loop:
	for(a=1;a<=5;a++)
	{
		if(a%2==0)
			printf("--+--+--");
		else if(a==1)
			printf("%c |%c |%c",board[0],board[1],board[2]);
		else if(a==3)
			printf("%c |%c |%c",board[3],board[4],board[5]);
		else if(a==5)
			printf("%c |%c |%c",board[6],board[7],board[8]);
		printf("\n");
	}
	printf("input your position\n");
	scanf("%d",&pos);
	if(board[pos-1]!=' ')
	{
		printf("there no position\n ");
		goto loop;
	}
	if(turn==1)
	{
		board[pos-1]='X';
		turn=2;
	}
	else if(turn==2)
	{
			board[pos-1]='O';
			turn=1;
	}
	goto loop;
	return 0;
}