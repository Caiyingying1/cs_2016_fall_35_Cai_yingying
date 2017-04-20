#include<stdio.h>

int Fibonacci(int n)
{
long int f;

if(n==1 || n==2)
{
f=1;
}
else
if(n>=3)
f = Fibonacci(n-1)+Fibonacci(n-2);
return f;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",Fibonacci(n));
    return 0;
}
