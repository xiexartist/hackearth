#include<stdio.h>
int main(void)
{
	int N,min=0;
	int a[7];
	char ar[1000000];
	int i=0;
	scanf("%d",&N);
	printf("%d",N);
	getchar();

	fgets(ar,N+1,stdin);
	for(i=0;i<N;i++)
		printf("%d ",ar[i]);
	
	i=0;	
	while(ar[i]!='\n')
	{
		switch(ar[i])
		{	
			case 'h': a[0]++;break;
			case 'a': a[1]++;break;
			case 'c': a[2]++;break;
			case 'k': a[3]++;break;
			case 'e': a[4]++;break;
			case 'r': a[5]++;break;
			case 't': a[6]++;break;
		}
	i++;
	}
	
	a[0]/=2;a[1]/=2;a[4]/=2;a[5]/=2;
	for(i=0;i<7;i++)
	{
		if(a[0]>a[i])
			a[0]=a[i];
	}
	
	printf("%d\n",a[0]);
	return 0;
}
