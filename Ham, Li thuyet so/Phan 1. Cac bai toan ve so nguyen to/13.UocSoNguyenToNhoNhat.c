#include <stdio.h>
#include <math.h>

int prime[100001];

void sang(){
	int i; 
	for(i=0; i<=100000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(i=2; i<=sqrt(100000); i++){
		if(prime[i]){
			int j; 
			for(j=i*i; j<=100000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		int i;
		for(i=1; i<=n; i++){
			if(i == 1) printf("1 ");
			else if(i%2 == 0) printf("2 ");
			else if(prime[i])  printf("%d ", i);
			else if(i%3 == 0) printf("3 ");
			else if(i%5 == 0) printf("5 ");
			else if(i%7 == 0) printf("7 ");
		}
		printf("\n");
	}
}
