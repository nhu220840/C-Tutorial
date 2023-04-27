#include <stdio.h>
#include <math.h>

int solve(int n){
	if(n == 1)
		return 1;
	else if(n % 2 == 0)
		return 2;
	for(int i = 3; i <= sqrt(n); i += 2){
		if(n % i == 0) return i;
	}
	return n;
}

int main(){
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("%d\n", solve(i));
	}
}
