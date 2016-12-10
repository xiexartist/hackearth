#include<stdio.h>
#include<string.h>
int main()
{
	int n,s;
	int cnt=0;
	char B[1000]={'\0'};	
	int N[1000];
	int i=0,j;
	scanf("%d",&n);
//	printf("%d",n);
	scanf("%s",B);
	printf("%s",B);
	s=strlen(B);
	printf("%d",s);

	for(j=0;j<n;j++)
	{
		N[j]=1;
	}

	for(j=0;;j++)
	{
		if(j==n)
			j=0;
		if(i==s)
			i=0;
		if(B[i]=='b')
		{
			while(N[j]==0)
			{	j++;
				if(j==n)
					j=0;
			}
			N[j]=0;
			printf("The %d number.\n",i+1);
			printf("The %d is over.\n",j);
			cnt++;
			if(cnt==n-1)
				break;
		}
		else
		{
			while(N[j]==0)
			{	j++;
				if(j==n)
					j=0;
			}
		}
		i++;
	}
	
	for(j=0;j<n;j++)
	{	if(N[j]==1)
		break;
	}
	
	printf("%d\n",j+1);
	
	return 0;
}
							
