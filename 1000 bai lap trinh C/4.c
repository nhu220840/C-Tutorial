#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	float sum = 0;
	int i;
	for(i=2; i<=2*n; i+=2){
		sum += 1.0*1/i;
	}
	printf("%f", sum);
}
