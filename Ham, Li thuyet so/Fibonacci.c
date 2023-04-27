#include <stdio.h>
#define ll long long
//Kiem tra 1 so co phai la so Fibonacci khong?
int checkFibo(ll n){
	if(n == 0 || n == 1) return 1;
	ll fn1 = 1, fn2 = 0; 
	for(int i = 2; i <= 92; i++){
		ll fn = fn1 + fn2;
		if(fn == n) return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}

//in ra n so Fibonacci dau tien
void inFibo(int n){
	if(n == 1) printf("0");
	else if(n == 2) printf("0 1");
	else{
		printf("0 1 ");
		ll fn1 = 1, fn2 = 0;
		for(int i = 2; i < n; i++){
			ll fn = fn1 + fn2;
			printf("%lld ", fn);
			fn2 = fn1; 
			fn1 = fn;
		}
	}
}

//in ra so Fibonacci thu n
ll findFibo(int n){
	if(n == 0 || n == 1) return n-1; 
	ll fn1 = 1, fn2 = 0, fn;
	for(int i = 2; i < n; i++){
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}

int main(){
	int n; scanf("%d", &n);
	printf("%lld", findFibo(n));
}

