#include<stdio.h>
int main(void)
{
	int i;
	long long a1,a2,a3;
	int n;
	int s[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	
	for(i=0;i<n;i=i+3)
		a1+=s[i];
	for(i=1;i<n;i=i+3)
		a2+=s[i];
	for(i=2;i<n;i=i+3)
		a3+=s[i];
	printf("%lld %lld %lld\n",a1,a2,a3);
	return 0;
}
