#include <stdio.h>

#define ll long long
int checkFibo(ll n){
	if(n == 0 || n == 1) return 1;
	ll f1 = 1, f2 = 0;
	for(int i = 2; i <= 92; i++){
		ll f = f1 + f2;
		if(f == n) return 1;
		f2 = f1; 
		f1 = f;
	}
	return 0;
}

int main(){
	ll n; scanf("%lld", &n);
	if(checkFibo(n))
		printf("YES");
	else
		printf("NO");
}
