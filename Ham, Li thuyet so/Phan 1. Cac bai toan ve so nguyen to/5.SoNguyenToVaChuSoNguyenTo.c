#include <stdio.h>
int prime[1000001];

int sang(){
	int i;
	for(i=0; i<=1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(i=2; i<=1000; i++){
		if(prime[i]){
			int j;
			for(j=i*i; j<=1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int digitPrime(int n){
	while(n != 0){
		int r = n%10;
		if(r != 2 && r != 3 && r != 5 && r != 7) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int a, b;
		scanf("%d %d" ,&a, &b);
		int cnt = 0;
		int i;
		for(i=a; i<=b; i++){
			if(prime[i] && digitPrime(i)) cnt++;
		}
		printf("%d", cnt);
	}
}
