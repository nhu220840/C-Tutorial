#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	int delta = pow(b,2) - 4*a*c;
	if(delta<0){
		printf("NO");
	}
	else if(a==b && b==c && c==0){
		printf("INF");
	}
	else{
		printf("%.2f ", (-b+sqrt(delta))/(2*a));
		printf("%.2f", (-b-sqrt(delta))/(2*a));
	}
}
