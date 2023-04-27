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
		int r = n%10;
		if(r != 2 && r != 3 && r != 5 && r != 7) return 0;
		n/=10;
	}
	return 1;
}

int sum(int n){
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n/=10;
	}
	return prime(sum);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d %d", &a, &b);
		int cnt = 0;
		int i;
		for(i=a; i<=b; i++){
			if(digitPrime(i) && prime(i) && sum(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}
