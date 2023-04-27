#include <stdio.h>
#include <math.h>

int prime[1000001];

void sang(){
	//B1: Coi cac so tu 0 den n deu la so ngto
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	//B2: loai thu cong so 0 va 1 khong phai so ngto
	prime[0] = prime[1] = 0;
	//B3: xet tu 2 den sqrt(n) va loai nhung boi cua so ngto
	for(int i = 2; i <= sqrt(1000000); i++){
		if(prime[i] == 1){
			for(int j = i*i; j <= 1000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		sang();
		int n; scanf("%d", &n);
		if(prime[n] == 1)
			printf("YES\n");
		else 
			printf("NO\n");
	}
}
