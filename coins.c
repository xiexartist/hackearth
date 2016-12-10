#include<stdio.h>
int main(void)
{
	int K,k;
	int i=0,j;
	int cnt=0,flag=0;
	char S[5000]={'\0'};
	char A[27]={'\0'};
	scanf("%d",&K);
	scanf("%s",S);
	while(S[i]!='\0')
	{
		for(j=i;j<5000;j++)
		{
			for(k=0;k<K+1;k++)
			{	
				if(S[j]==A[k]||S[j]=='\0')
					break;
				else if(A[k]=='\0')
				{	A[k]=S[j];break;}
			}
			if(S[j]=='\0')
				break;
			if(k==K-1)	
			{	cnt++; flag=1;}
			if(k==K)
				break;
			else if(flag==1&&k<K-1)
				cnt++;
		}
		flag=0;
		for(k=0;k<27;k++)
			A[k]='\0';
		i++;
	}
	printf("%d\n",cnt);
	return 0;
}

/*
#include<iostream>
#include<cstdio>
#include<cstring>
	
using namespace std;
bool B[30];

int main(int argc,char* argv[])
{
	if(argc==2 or argc==3)
		freopen(argv[1],"r",stdin);
	if(argc==3)
		freopen(argv[2],"w",stdout);
	string s;
	int ans ,count, k;
	cin>>k>>s;
	ans=0;
	for(int i=0;i<s.length();++i)
	{
		count=0;
		memset(B,false,sizeof(B));
		for(int j=i;i<s.length();++j)
		{
			if(B[s[j]-'a']==false) count++;
			B[s[j]-'a']=true;
			if(count==k)
				ans++;
		}
	}
	cout<<ans<endl;
	return 0;
}
*/
