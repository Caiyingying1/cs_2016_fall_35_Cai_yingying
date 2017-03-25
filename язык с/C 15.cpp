#include<stdio.h>
#include<string.h>
int main()
{
	char c[1000];
	int f[1000],max=0,len,n=0,m[256]={0},i;
	gets(c);
	len=strlen(c);
	f[0]=1;
	for (i=1;i<len;i++)
	{
		if (c[i]==c[i-1]) f[i]=f[i-1]+1;
		else f[i]=1;
		if (f[i]>max) max=i;
	}
	printf("result:");
	for (i=0;i<len;i++)
		if ((f[i]==f[max])&&(!m[c[i]])) 
		{
			m[c[i]]=1;
			printf("%c ",c[i]);
		}

}

