#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,l,t,x1,x2;
  
     printf("input three numbers\n");
     scanf("%f%f%f",&a,&b,&c);
    
     t=b*b-4*a*c;

     if(t>0)
      {
    x1=(-b+sqrt(t))/(2*a);
       x2=(-b-sqrt(t))/(2*a);
       printf("%f\n%f\n",x1,x2);
   } 
     else if(t==0)
      {
    x1=-(b/(2*a));
       printf("%f\n%f\n",x1,x1);
   }
     else
      {
    l=sqrt(-t)/2/a;
    t=-b/2/a;
    printf("%f%+fi\n%f%+fi",t,l,t,-l);
   }
return 0;
}
