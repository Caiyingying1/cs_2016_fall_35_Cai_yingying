#include <stdio.h>

#include <string.h>



char reverse( char *c)

    {

    int k=0,i;

    char b[1000];

    for(i=strlen(c)-1;i>=0;--i)

    {

        b[k]=c[i];

    k++;

    }

    for(i=0;c[i]!='\0';++i)

    {

        c[i]=b[i];

    }

    return *c;

}



int main()

{

    int i;

    char a[1000];

	printf("Введите строку\n");

    gets(a);

    reverse(a);

    for( i=0;a[i]!='\0';++i)

    {

        printf("%c",a[i]);

    }

	printf("\n");

    return 0;

}
