#include<stdio.h>
int main(void)
{
	char ch;
	while(scanf("%c",&ch)!=0)
	{
		printf("%d\n",ch);
		getchar();
	}
	return 0;
}
