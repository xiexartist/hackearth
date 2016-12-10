#include<stdio.h>
int main(void)
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		printf("%d ",ch);
	}
	return 0;
}
