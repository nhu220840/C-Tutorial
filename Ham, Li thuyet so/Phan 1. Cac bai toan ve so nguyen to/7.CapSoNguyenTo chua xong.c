#include <stdio.h>
int prime[10001];

void sang(){
	int i;
	for(i=0; i<=10000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(i=2; i<=100; i++){
		if(prime[i]){
			int j;
			for(j=i*i; i<=10000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		int i;
		for(i=2; i<=n/2; i++){
			if(prime[i] && prime[n-i]) printf("%d %d\n", i, n-i); 
		}
	}
}
