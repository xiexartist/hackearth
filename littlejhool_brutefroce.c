#include<stdio.h>
#include<stdlib.h>
int sub_make(void);
void sort(int *a,int left,int right);
int brute[100];
int main()
{
	int t,i,n,flag;
	int j=sub_make();

	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		scanf("%d",&n);
		for(i=0;i<j-1;i++)
		{
			if(n>brute[i] && n<brute[i+1])
			{
				printf("%d\n",brute[i]);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("-1\n");
	}
	return 0;
}

int sub_make()
{
	int n,i,j;
	int cube[100];
	
	for(n=1;n*n*n<704977;n++)
		cube[n-1]=n*n*n;
//	i=n-1;			//before 704977,there are n-1 
	
	int *add;
	add=(int *)malloc((n-1)*(n-1)*sizeof(int));
	int m=0;
	for(i=0;i<n-2;i++)
		for(j=i+1;j<n-1;j++)
		{
			add[m]=cube[i]+cube[j];
			++m;
		}
	sort(add,0,m);

	int flag=1;
	j=0;
	for(i=0;i<m;i++)
	{
		if(add[i]==add[i+1] && flag==1)
		{	
			brute[j]=add[i];
			++j;
			flag=0;
		}
		else
		flag=1;
	}
//	for(i=0;i<j+1;i++)
//		printf("%d ",brute[i]);
	
	free(add);
	return j;
}

void sort(int *a,int left,int right)
{
	if(left>=right)
	{
		return;
	}
	
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
