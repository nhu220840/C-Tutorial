#include <stdio.h>
int main(){
	int a;
	scanf("%lld", &a);
	int n = a;
	long long Sn = 1.0*n*(n+1)*(2*n+1)/6; 
	printf("%lld", Sn);
}
