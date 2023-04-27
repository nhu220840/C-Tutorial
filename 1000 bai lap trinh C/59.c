#include <stdio.h>
int tn(long long n){
	long long num = 0;
	long long m = n;
	while(n){
		int r = n%10;
		num = num*10 + r;
		n/=10;
	}
	if(num == m) return 1;
	return 0;
}

int main(){
	long long n; scanf("%lld", &n);
	if(tn(n) == 1) printf("YES");
	else printf("NO");
}
