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

int digitPrime(int n){
	while(n != 0){
		if(n%10 != 2 && n%10 != 3 && n%10 != 5 && n%10 != 7) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d %d", &a, &b);
		int cnt = 0;
		int i;
		for(i=a; i<=b; i++){
			if(digitPrime(i) && prime(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}
