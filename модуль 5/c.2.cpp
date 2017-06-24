#include<stdio.h>    
#include<algorithm>    
#include<iostream>    
#include<iomanip>    
#include<cmath>    
using namespace std;    
const int inf=0x3f3f3f3f;    
double f(double x)    
{    
    if(x==0)    
        return 1;  
    return sin(x)/x;    
}    
double Calculate(double(*FunCallBack)(double x),double a,double b,double dx)
{    
    double doui;    
    double total = 0;       
    for (doui = a; doui <= b; doui += dx)    
    {    
        total+= FunCallBack(doui)*dx;    
    }    
    return total;    
}    
double Tixing(double a,double b)
{    
    return (b-a)/2*(f(a)+f(b));    
}    
double Simpson(double a,double b)    
{    
    return (b-a)/6*(f(a)+4*f((a+b)/2)+f(b));    
}    
double q(double a,double b,int n)  
{    
    double h,x[n-2];    
    double w=0;    
    h=(b-a)/n*1.0;    
    for(int i=0; i<=n-2; i++)    
    {    
        x[i]=a+(i+1)*h;    
        w+=f(x[i]);    
    }    
    return h*(f(a)+2*w+f(b))/2;    
}    
double s(double a,double b,int n)
{    
    double h,x[n];    
    double w=0,v=0;    
    h=(b-a)/n*1.0;    
    for(int i=1; i<=n/2; i++)    
    {    
        x[2*i-1]=a+(2*i-1)*h;    
        w+=f(x[2*i-1]);    
    }    
    for(int i=1; i<=n/2-1; i++)    
    {    
        x[2*i]=a+2*i*h;    
        v+=f(x[2*i]);    
    }    
    return h*(f(a)+4*w+2*v+f(b))/3.0;    
}    
int main()    
{    
    while(1)    
    {    
        double a,b,T,fT,fS,cor,jingdu,jingdu1,jingdu2;    
        int n;    
        printf("input a,b and n:\n");    
        scanf("%lf%lf%d",&a,&b,&n);    
        cor=Calculate(f,a,b,0.000001);    
        T=Tixing(a,b);    
        jingdu=fabs(T-cor)/cor;    
        fT=q(a,b,n);    
        jingdu1=fabs(fT-cor)/cor;    
        fS=s(a,b,n);    
        jingdu2=fabs(fS-cor)/cor;    
        printf("Accurate value:%lf\nTrapezoidal formula approximation:%lf ",cor,T,jingdu,fT,jingdu1,fS,jingdu2);    
    }    
    return 0;    
}   
