#include <stdlib.h> 
#include <stdio.h>

double sss(double * x, int n){
	double max=x[1];
	double min=x[1];
	int i=0;
	for(i=0;i<n;++i){
		if (x[i]<min)
			min=x[i];
		if (x[i]>max)
			max=x[i];
	}
	double p=max-min;
	return p;
}

int main(){
int i,n;
	printf("amount of number:\n");
	scanf("%d", &n);
double * x =(double *)malloc(n*10);
	for (i=0;i<n;++i){
	}
	printf("input number\n");
	for (i=0;i<n;++i)
	scanf("%lf", &x[i]);
	printf("%lf\n", sss(x,n));
	return 0;	
 } 
