#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	long long sum = 0;
	int i;
	for(i = 1; i <= n; i++){
		long long s = pow(i,2);
		sum += s;
}
	printf("%lld", sum);
}
