#include <stdio.h>
#include <math.h>
int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	float sum = 1;
	int sum1 = 1;
	int i;
	for(i=1; i<=n; i++){
		sum1 *= (2*i)*(2*i-1);
		sum += pow(x, 2*i)/sum1;
	}
	printf("%f", sum);
}
