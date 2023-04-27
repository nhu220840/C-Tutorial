#include <stdio.h>
#include <math.h>

#define ll long long

ll F[100];

void Fibo(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 92; i++){
		F[i] = F[i-1] + F[i-2];
	}
}

int checkFibo(ll n){
	for(int i = 0; i <= 92; i++){
		if(F[i] == n) return 1;
	}
	return 0;
}

int main(){
	Fibo();
	ll n; scanf("%lld", &n);
	int ok = 0;
	ll a[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(checkFibo(a[i])){
			printf("%lld ", a[i]);
			ok = 1;
		}
	}
	if(ok == 0) printf("NONE");
}
