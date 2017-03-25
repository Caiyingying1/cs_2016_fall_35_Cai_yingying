#include<stdio.h>

int main()
{
    int day=19;
    int month=8;
    
    printf("%d\n",day);
    printf("%d\n",month);
    int t=month;
    month=day;
    day=t;
    printf("%d\n",day);
    printf("%d\n",month);
    return 0;
}

