#include<stdio.h>

int main()
{
    float c,f;
    printf("Please enter a temperature of Celsius:");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("%f¨H\n",f);
    return 0;
}
