
#include <stdio.h>

unsigned int rightrot(unsigned int x, int n);
int countbits(unsigned x);

int main()
{
    unsigned int x;
    int n;
    
    printf("Enter the number:\nx: ");
    scanf("%d", &x);
    printf("n: ");
    scanf("%d", &n);
    printf("%d\n", rightrot(x, n));
    return 0;
}
int countbits(unsigned x)
{
    int count;
    for(count=1; x>=2; count++)
        x/=2;
    return count;
}
unsigned  int rightrot(unsigned int x, int n)
{
    int bit, i;
    i = countbits(x);
    if(n>i)
        n %=i;
    bit = (x&((~((~0>>n)<<n))))<<(countbits(x)-n);
    return (x>>n)|bit;
    
}
