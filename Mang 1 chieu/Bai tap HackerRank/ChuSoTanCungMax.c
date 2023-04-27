#include <stdio.h>
#include <math.h>

int prime[10000001];

void sang(){
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i] == 1){
			for(int j = i*i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

int cstc(int n){
	int max = n%10;
	while(n){
		int r = n%10;
		if(r > max) 
			return 0; 
		n /= 10;
	}
	return 1;
}

int main(){
	sang();
	int n; scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		if(prime[i] && cstc(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
}
