#include <stdio.h>
#include <math.h>

int prime[100001];

void sang(){
	int i; 
	for(i=0; i<=100000; i++){
		prime[i] = i;
	}
	for(i=2; i<=sqrt(100000); i++){
		if(prime[i] == i){
			int j; 
			for(j=i*i; j<=100000; j+=i){
				if(prime[j] == j) prime[j] = i;
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
		for(i=1; i<=n; i++){
			printf("%d ", prime[i]);
		}
		printf("\n");
	}
}
