#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	long long sum = 0;
	long long sum1 = 1;
	int i;
	for(i=1; i<=n; i++){
		sum1 *= i;
		sum += sum1;
	}
	printf("%lld", sum);
}
