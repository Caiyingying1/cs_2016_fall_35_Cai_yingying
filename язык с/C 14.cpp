#include <stdio.h> 

main() 

{ 

int n=0,i,j; 

char a[10]; 

printf("write sentence£º\n"); 

for(i=0;a[i-1]!='\n';i++) 

{ 

scanf("%c",&a[i]); 

n++; 

} 

printf("input£º\n"); 

for(i=n-2;i!=-1;i--) 

{ 

printf("%c",*(a+i)); 

} 

putchar('\n'); 

} 
