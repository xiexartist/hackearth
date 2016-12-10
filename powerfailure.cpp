#include<iostream>
#include<algorithm>
#define MOD 1000000007
using namespace std;
int main()
{
	int primes[100001]={0},i,j;
	i=2;
	primes[0]=1;
	primes[1]=1;
	while(i*i<100000)
	{
		if(primes[i]==1)
		{
			i++;
			continue;
		}
		j=i*2;
		while(j<=100000)
		{
			primes[j]=1;
			j+=i;
		}
		i++;
	}
	int primeslt[100001]={0};
	i=1;
	while(i<=100000)
	{
		primeslt[i]=primeslt[i-1];
		if(primes[i]==0)
			primeslt[i]++;
		i++;
	}

	int t,n,m;
	cin>>t;
	while(t--)
	{	
		cin>>n>>m;
		i=0;
		int volts[100000];
		while(i<n)
		{
			cin>>volts[i];
			i++;
		}
		sort(volts,volts+n);
		i=n-1;
		long long totways=1;
		while(i>=0)
		{
			int thisways=m-volts[i]+1;
			int alreadyused=n-i-1;
			int cannotuse=primeslt[m]-primeslt[volts[i]-1];
			thisways-=(alreadyused+cannotuse);
			if(thisways<=0)
			{
				break;
			}
			totways=(totways*thisways)%MOD;
			i--;
		}
		if(i!=-1)
			cout<<"0"<<endl;
		else
			cout<<totways<<endl;
	}	
	return 0;
}
