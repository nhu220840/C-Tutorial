#include <stdio.h>
#include <math.h>
int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	float sum = 0;
	int sum1 = 1;
	int i;
	for(i=1; i<=n; i++){
		sum1 *= i;
		sum += pow(x,i)/sum1;
	}
	printf("%f", sum);
}
