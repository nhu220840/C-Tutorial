#include <stdio.h>
#include <math.h>
int main(){
	float x; scanf("%f", &x);
	int n; scanf("%d", &n);
	float a = pow(x,1.0/n);
	printf("%f", a);
}
