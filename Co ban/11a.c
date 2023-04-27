#include <stdio.h>
int main(){
	int a;
	scanf("%lld", &a);
	long long n = a;
	long long Sn = 1ll*2*(n*(n+1)/2);
	printf("%lld", Sn);
}
