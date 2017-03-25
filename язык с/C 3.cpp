#include <stdio.h>

int main()
{
    float r1,r2,r;
    printf("Enter the two resistance values that need to be connected in parallel£º");
    scanf("%f %f",&r1,&r2);
    r=1/(1/r1+1/r2);
    printf("The resistance value after parallel is %f\n",r);
    return 0;
}
