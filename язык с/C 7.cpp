#include <stdio.h>
int pow(int k,int j)

{

    int i ,x=1;

    for(i=0;i<j;++i)

        x=x*k;

    k=x;
    return k;

}
int main()
{
   int a,b,p;
   char c;
   while(

  printf(" input operation \n"),
  scanf("%d%c%d",&a,&c,&b)==3
  )
   {
 
  if(c=='+') printf("%d\n",a+b);
  else if(c=='-') printf("%d\n",a-b);
  else if(c=='*') printf("%d\n",a*b);
  else if(c=='/') printf("%d\n",a/b);
  else if(c=='%') printf("%d\n",a%b);
  else if(c=='^') 
   {

	p=pow(a,b);

	printf("%d",p);

	}
     }
   return 0;
}
