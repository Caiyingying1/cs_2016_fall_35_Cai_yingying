#include <stdio.h>

#include <stdlib.h>

#include <stdio.h>

unsigned rightrot(unsigned x,int n)

{

int i;

for (i=0;i<n;i++) {

if ((x & 1)==1)

x= (x >>1) | ~(~0>>1); 

else

x=x>>1;

}

return x;

}





main ()

{

unsigned rightrot(unsigned ,int);

unsigned x;

int n;

scanf("%u %d",&x,&n);

printf("(%u,%d)=%u",x,n,rightrot(x,n));

system("pause");

}
