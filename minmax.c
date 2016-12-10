#include<stdio.h>
void sort(int *a,int i,int j);
int main(void)
{
	int N;
	int a[1000];
	int count=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	sort(a,0,N-1);
	for(int i=0;i<N-1;i++)
	{
		if((a[i+1]-a[i])==0)
			count++;
	}
	int member=0;
	member=a[N-1]-a[0]+1;
	if(member==N-count)
		printf("YES\n");
	else 
		printf("NO\n");
	return 0;
}

void sort(int *a,int left,int right)
{
	if(left>=right)
		return ;
	int i=left;
	int j=right;
	int key=a[left];
	while(i<j)
	{
		while(i<j && key<=a[j])
			j--;
		a[i]=a[j];
		while(i<j && key>=a[i])
			i++;
		a[j]=a[i];
	}
	a[i]=key;
	sort(a,left,i-1);
	sort(a,i+1,right);
}
