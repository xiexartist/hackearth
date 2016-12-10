#include<stdio.h>
#define MOD 1000000007
int main(void)
{
	int m;
	int i;
	long long ans=1;
	scanf("%d",&m);
	for(i=m;i>=1;i--)
	{
		ans=(ans*i)%MOD;
	printf("%lld\n",ans);
	}
	printf("%lld\n",ans);
	return 0;
}
