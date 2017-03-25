# include<stdio.h>
# include<math.h>
int calculate(int a,int b, int c) ;
int main(){
double a,b,c;
printf("Please input a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);    
if(b*b-4*a*c<0)
printf("NO result!\n");
else
printf("x1=%lf\nx2=%lf\n",(sqrt(b*b-4*a*c)-b)/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a)); 
return 0;
}

