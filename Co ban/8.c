#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	int n = a;
	long long Sn = 1ll*n*(n+1)/2;
	printf("%lld", Sn);
	
}
