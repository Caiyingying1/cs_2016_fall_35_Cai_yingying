#include<stdio.h>
int main()
{ char str[256];
  int i,k,n;
  gets(str);
  i=0; k=0; n=1;
  while ( str[i] )
  { if ( str[k]<str[i] ) { k=i; n=1; }
    else if ( str[k]==str[i] ) n++;
    i++;
  }
  printf("MAX%c  LOCATION%d  frequency%d\n",str[k],k,n);
}
