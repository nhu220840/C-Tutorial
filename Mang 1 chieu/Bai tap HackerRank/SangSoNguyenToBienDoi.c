#include <stdio.h>
#include <math.h>

int prime[100001];

//prime[i]: luu uoc so nguyen to nho nhat cua i
void sang(){
	for(int i = 1; i <= 100000; i++){
		prime[i] = i;
	}
	for(int i = 2; i <= sqrt(100000); i++){
		if(prime[i] == i){
			for(int j = i*i; j <= 100000; j += i){
				if(prime[j] == j){
					prime[j] = i;
				}
			}
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	sang();
	for(int i = 1; i <= n; i++){
		printf("%d\n", prime[i]);
	}
}
