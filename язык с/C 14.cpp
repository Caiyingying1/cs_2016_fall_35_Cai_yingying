#include <stdio.h>

#include <string.h>

int main()

{

  char str[100];

  int n, i;

  printf("Input a string:");

  scanf("%s", str);

  n = strlen(str);

  printf("The reversed string:");

  for (i = n - 1; i >= 0; i--)

    printf("%c", str[i]);

  printf("\n");

}

