#include <stdio.h>
#include <math.h>

#define ll long long

ll Euler(ll n){
	ll phi = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			phi = phi - phi/i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n != 1){
		phi = phi - phi/n;
	}
	return phi;
}

int main(){
	ll n; scanf("%lld", &n);
	printf("%lld", Euler(n));
}
