#include <stdio.h>
int main()
{
   int a,b;
   char c;
   while(

  printf("请输入1个式子(输入q退出)：\n"),
  scanf("%d%c%d",&a,&c,&b)==3
  )
   {
 
  if(c=='+') printf("%d\n",a+b);
  else if(c=='-') printf("%d\n",a-b);
  else if(c=='*') printf("%d\n",a*b);
  else if(c=='/') printf("%d\n",a/b);
   }
   return 0;
}
