#include<stdio.h>
int main()
{
	int T;
	int temp;
	int i,j;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		int height[100000];
		scanf("%d",&N);
		for(i=0;i<N;i++)
			scanf("%d",&height[i]);
		for(i=0;i<N-1;i++)
			for(j=i+1;j<N;j++)
			{
				if(height[i]<height[j])
				{
					temp=height[j];
					height[j]=height[i];
					height[i]=temp;
				}
			}
		for(i=0;i<N;i++)
			printf("%d ",height[i]);
		putchar('\n');
	}
	return 0;
}
