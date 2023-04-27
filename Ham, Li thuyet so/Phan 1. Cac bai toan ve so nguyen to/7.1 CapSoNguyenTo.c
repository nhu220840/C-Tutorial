#include <stdio.h>
#include <math.h>
int prime(int n){
	if(n<2) return 0;
	else{
		int i;
		for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
		}
		return 1;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int i;
		for(i=2; i<=n/2; i++){
			if(prime(i) && prime(n-i)) printf("%d %d\n", i, n-i); 
		}
	}
}
