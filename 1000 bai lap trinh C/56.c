#include <stdio.h>
int kiemtra(long long n){
	while(n){
		int r = n%10;
		if(r%2 == 0) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	long long n; scanf("%lld", &n);
	if(kiemtra(n) == 1) printf("YES");
	else printf("NO");
}
