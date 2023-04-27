#include <stdio.h>
#include <math.h>
int prime[1001];

void sang(){
	int i;
	for(i=0; i<=1000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(i=2; i<=sqrt(1000); i++){
		if(prime[i]){
			int j;
			for(j=i*i; j<=1000; j+=i){
				prime[j] = 0;
			}
		}
	}
} 

int main(){
	sang();
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int i;
		for(i=1; i<=sqrt(n); i++){
			if(prime[i] == 1) printf("%d ", i*i);
		}
		printf("\n");
	}
}
