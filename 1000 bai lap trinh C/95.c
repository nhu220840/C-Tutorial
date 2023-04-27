#include <stdio.h>
int main(){
	float a, b, c; scanf("%f %f %f", &a, &b, &c);
	if(a<0) a = -a;
	if(b<0) b = -b;
	if(c<0) c = -c;
	printf("%f %f %f", a, b, c);
}
