#include<stdio.h>
#include<string.h>
int main(void)
{
	char st[1000];
	int len;
	int sum=0;
	int i;
	scanf("%s",st);
	len=strlen(st);
	printf("%d",len);
	for(i=0;i<len;i++)
	{
		sum+=st[i]-'a';
//	printf("%d\n",sum);
	}
	printf("%d\n",sum+len);
	return 0;
}
