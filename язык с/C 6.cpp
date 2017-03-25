#include <stdio.h>
int fact(int n);
int main(void) {
    int current;
    printf("Enter a positive integer  ");
    scanf("%d", &current);
    while (current > 0) {
        printf("The factorial of %d is %d\n", current, fact(current));
        printf("Enter a positive integer  ");
        scanf("%d", &current);
    }
}

int fact(int n) {
    int lcv; 
    int p;
    for(p=1, lcv=2; lcv <= n; p=p*lcv, lcv++);
    return p;
}
