#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	long long sum = 0;
	for(i=1; i<=n; i++){
		sum += pow(i,3);
	}
	printf("%lld", sum);
}
