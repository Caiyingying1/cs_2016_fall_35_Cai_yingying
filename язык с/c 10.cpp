#include <stdio.h>





unsigned int rightrot(unsigned int x,unsigned int n)

{

    return (x>>n);

}



int main()

{



	unsigned int x, n;

	printf("input x: ");

	scanf("%i",&x);

	printf("input n:");

    scanf("%u", &n);

	x = rightrot(x, n);

	printf("%u", x);



	return 0;

}
