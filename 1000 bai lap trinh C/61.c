#include <stdio.h>
int giam(long long n){
	while(n>=10){
		int r = n%10;
		if(r >= (n/10)%10) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	long long n; scanf("%lld", &n);
	if(giam(n)) printf("YES");
	else printf("NO");
}
