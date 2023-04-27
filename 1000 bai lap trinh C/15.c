#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	float sum = 0;
	int sum1 = 0;
	int i;
	for(i=1; i<=n; i++){
		sum1 += i;
		sum += 1.0/sum1;
	}
	printf("%f", sum);
}
