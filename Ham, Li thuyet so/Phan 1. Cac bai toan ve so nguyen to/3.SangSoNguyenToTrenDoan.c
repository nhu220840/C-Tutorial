#include <stdio.h>
#include <math.h>
int max(int a, int b){
	return a>b ? a : b;
}

void sang(int l, int r){
	int prime[r-l+1];
	int i;
	for(i=0; i<=r-l+1; i++){
		prime[i] = 1;
	}
	for(i=2; i<=sqrt(r); i++){
		int j;
		for(j=max(i*i, (l+i-1)/i*i); j<=r; j+=i){
				prime[j-l] = 0;
		}
	}
	for(i=max(l,2); i<=r; i++){
		if(prime[i-l] == 1) printf("%d ", i);
	}
}


int main(){
	int l, r;
	scanf("%d %d", &l, &r);
	sang(l, r);
}
