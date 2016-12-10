#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE *fp;
	char filename[20];
	char ch;
	puts("Please enter the filename: ");
	gets(filename);
	if((fp=fopen(filename,"rb"))==NULL)
	{
		fprintf(stderr,"error to open file &s.",filename);
		exit(1);
	}
	rewind(fp);
	while((ch=getc(fp))!=EOF)
	{
		putchar(ch);
	}
	return 0;
}
