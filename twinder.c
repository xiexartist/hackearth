#include<stdio.h>
int main()
{
	int M,H,L,N;
	scanf("%d",&M);
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d %d",&H,&L);
		if(H<M || L<M)
			puts("UPLOAD ANOTHER");
		else if(H==L)
			puts("ACCEPTED");
		else 
			puts("CROP IT");
	}
	return 0;
}
