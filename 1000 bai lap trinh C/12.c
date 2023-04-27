#include <stdio.h>
int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	long long sum = 0;
	int i;
	for(i=1; i<=n; i++){
		sum += pow(x, i);
	}
	printf("%lld", sum);
}
