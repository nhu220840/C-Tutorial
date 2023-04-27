#include <stdio.h>
#include <math.h>
int count(int n){
	int cnt = 0;
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) cnt++;
		while(n%i == 0) n /= i;
	}
	if(n != 1) cnt++;
	return cnt;	
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", count(n));
	}
}
