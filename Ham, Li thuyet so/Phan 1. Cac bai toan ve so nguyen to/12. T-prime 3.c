#include <stdio.h>
#include <math.h>
int prime[1000001];

void sang(){
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

int main(){
	sang();
	int t; scanf("%d", &t);
	while(t--){
		long long l, r; scanf("%lld %lld", &l, &r);
		int cnt = 0;
		int i;
		for(i=sqrt(l); i<=sqrt(r); i++){
			if(prime[i] && 1ll*i*i >= l ) cnt++;
		}
		printf("%d\n", cnt);
	}
}
