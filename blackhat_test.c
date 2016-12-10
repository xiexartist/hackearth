#include<stdio.h>
int main()
{
	int n;
	char ch,chr;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int alp[26]={0};
		while((ch=getchar())!='\n')
		{
			alp[ch-'a']++;
			if(alp[ch-'a']>26)
				alp[ch-'a']-=26;
			
			if((ch-'a')<13)
				chr=ch+13;
			else 
				chr=ch-13;
			
			if((chr-'a'+alp[ch-'a']-1)>25)
			{
				chr=chr+alp[ch-'a']-27;
				putchar(chr);
			}
			else
			{
				chr=chr+alp[ch-'a']-1;
				putchar(chr);
			}
 			
		}
			putchar('\n');
	}
	return 0;
}	
