#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	long long s = 1;
	for(i=1; i<=n; i++){
		s *= i;
	}
	printf("%lld", s);
}
