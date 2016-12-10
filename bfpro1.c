#include<stdio.h>
void sort(int *a,int left,int right);
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
		sort(height,0,N-1);

		for(i=0;i<N;i++)
			printf("%d ",height[i]);
		putchar('\n');
	}
	return 0;
}

void sort(int *a,int left,int right)
{
	if(left>=right)	
		return;
	int i=left;
	int j=right;
	int key=a[left];
	
	while(i<j)
	{
		while(i<j && key>=a[j])
		{
			j--;
		}
		a[i]=a[j];
		while(i<j && key<=a[i])
		{
			i++;
		}
		a[j]=a[i];
	}
	a[i]=key;
	sort(a,left,i-1);
	sort(a,i+1,right);
}
