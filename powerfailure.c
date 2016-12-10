#include<stdio.h>	
#define MOD 1000000007
//void sort(int *,int);
int p[100005],a[100005],b[100005];
    merge(int *t,int *a, int low, int high)
    {
        int mid=(low+high)/2;
        int i=low,j=mid+1,k=low;
        while(i<=mid&&j<=high)
        {
            if(a[i]>=a[j])
                t[k++]=a[i++];
            else
                t[k++]=a[j++];
        }
        while(i<=mid)
            t[k++]=a[i++];
        while(j<=high)
            t[k++]=a[j++];
     
        for(i=low; i<=high; i++)
            a[i]=t[i];
    }
    sort(int *a,int *t,int low,int high)
    {
        if(low<high)
        {
            int mid=(low+high)/2;
            sort(a,t,low,mid);
            sort(a,t,mid+1,high);
            merge(t,a,low,high);
        }
	}
				
int main(void)
{
	int i,j,k;
	int t,n,m;
	long long ways=0,ans=0;
	int prime[100001]={0};
	int T[100005];
	int arr[100000];
	int primet[100001]={0};
	for(i=2;i*i<=100000;i++)
	{	if(prime[i]==0)
			{for(j=i*2;j<=100000;j+=i)
				prime[j]=1;}
	}
	prime[0]=1;
	prime[1]=1;
	primet[0]=1;
	for(i=1;i<=100000;i++)
	{
		primet[i]=primet[i-1]+prime[i];
	}			
//	for(i=1;i<10;i++)
//		printf("%d %d %d\n",100000,prime[100000],primet[100000]);
//		printf("%d %d %d\n",99999,prime[99999],primet[99999]);

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);

//		printf("%d %d\n",n,m);
//		for(i=0;i<n;i++)
//			printf("%d ",arr[i]);
//		putchar('\n');
//		sort(arr,n);
		sort(arr,T,0,n-1);
		ans=1;
		for(k=0;k<n;k++)
		{
			ways=primet[m]-primet[arr[k]-1]-k;
			printf("%lld ",ways);
//			break;
			if(ways<=0)
			{	ans=0;break;}
			ans=(ans*ways)%MOD;
		}
		putchar('\n');
		printf("%lld %d\n",ans,ways);
	}
	return 0;
}

/*void sort(int *ar,int n)
{
	int i,j,k,temp;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(ar[k]<ar[j])
				k=j;
			if(i!=k)
			{
				temp=ar[i];
				ar[i]=ar[k];
				ar[k]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}*/	
