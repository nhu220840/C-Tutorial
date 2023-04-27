#include <stdio.h>
#include <math.h>

#define ll long long

ll F[100];

void Fibo();
int checkFibo(ll n);
int nt(ll n);
ll tongcs(ll n);

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

int nt(ll n){
	if(n<2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

ll tongcs(ll n){
	ll sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main(){
	Fibo();
	ll n; scanf("%lld", &n);
	for(int i = 2; i <= n; i++){
		if(nt(i) && checkFibo(tongcs(i))){
			printf("%lld ", i);
		}
	}
}
