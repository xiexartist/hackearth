#include<stdio.h>
#include<string.h>

int prime[200]={0};
int n=0;
void primes(void);
int main(void)
{
	int t;
	int s;

	primes();
	scanf("%d",&t);
	while(t--)
	{
		char str[501]={0};
		scanf("%d",&s);
		while(getchar()!='\n')
			getchar();
		for(int i=0;i<s;i++)
			str[i]=getchar();
		int tempa,tempb,j=0;
		for(int i=0;i<s;i++)
		{
			for(j=n-1;j>=0;j--)
				if(prime[j]-str[i]<=0)
					break;
			if(prime[j]<67)
				str[i]=67;
			else if((str[i]-prime[j])<=(prime[j+1]-str[i]))
				str[i]=prime[j];
			else
				str[i]=prime[j+1];
		}
		puts(str);
	}
	return 0;
}

		
void primes(void)
{
	int prime_chk[125]={0};
	int i=2;
	prime_chk[0]=1;
	prime_chk[1]=1;
	while(i*i<124)
	{
		int j=0;
		if(prime_chk[i]==1)
		{
			i++;
			continue;
		}
		j=i*2;
		while(j<=124)
		{
			prime_chk[j]=1;
			j+=i;
		}
		i++;
	}
	int j=0;
	for(int i=0;i<124;i++)
	{
		if(prime_chk[i]==0)
		{
			prime[j]=i;
			j++;
		}
	}

	for(int i=0;i<200;i++)
		if(prime[i]==0)
		{
			n=i+1;
			break;
		}
	prime[n-1]=200;
	printf("%d\n",n);
for(int i=0;i<=n;i++)
	printf("%d %c",prime[i],prime[i]);

}
