#include <stdio.h>
int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	long long sum = 0;
	int i;
	for(i=0; i<=n; i++){
		sum += pow(x, 2*i+1);
	}
	printf("%lld", sum);
}
