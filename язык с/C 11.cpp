#include<stdio.h>
#include<stdlib.h>
int  main()
{
   int i,n,k=1,a[10]; 
   printf("enter n:");
   scanf("%d",&n);
   if(n<=0) exit(0); 
   a[0]=n%2;
   do
  {
    n=n/2;
    i=n%2;
    a[k++]=i;
   }while(n!=0);
   for(i=9;a[i]==0;i--) ;  
     for(;i>-1;i--)
          printf("%d",a[i]);
}
