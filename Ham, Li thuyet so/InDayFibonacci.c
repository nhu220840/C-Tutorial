#include <stdio.h>

#define ll long long

void inFibo(int n){
	if(n == 1) printf("1\n");
	else{
		printf("1\n");
		ll fn1 = 1, fn2 = 1;
		for(int i = 1; i < n; i++){
			ll fn = fn1 + fn2;
			printf("%lld\n", fn);
			fn2 = fn1;
			fn1 = fn;
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	inFibo(n);
}
