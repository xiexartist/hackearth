#include<stdio.h>
#include<string.h>
int main(void)
{
	int cases;
	char str[100000];
	char rts[100000];
	int len;
	int i;
	scanf("%d",&cases);
	while(cases--)
	{
		int a[100000]={0};
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
			rts[len-i-1]=str[i];
		for(i=0;i<len;i++)
		{
			a[i]=str[i]+rts[i]-96;
			if(a[i]>122)
				printf("%c",a[i]-26);
			else
				printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}

