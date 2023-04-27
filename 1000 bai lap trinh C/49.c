#include <stdio.h>
int main(){
	long long n; scanf("%lld", &n);
	long long num = 0;
	while(n != 0){
		int r = n%10;
		num = num*10+r;
		n/=10;
	}
	printf("%lld", num%10);
}
