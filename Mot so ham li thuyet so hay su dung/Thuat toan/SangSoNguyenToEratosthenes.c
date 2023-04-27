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

int main(){
	sang();
	int n; scanf("%d", &n);
	if(prime[n])
		printf("YES");
	else
		printf("NO");
}
