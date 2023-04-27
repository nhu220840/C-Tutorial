#include <stdio.h>
#include <math.h>
int find(int n){
	int i;
	for(i=2 ;i<=sqrt(n); i++){
		if(n%i == 0) return i;
	}
	return n;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int i; 
		for(i=1; i<=n; i++){
			printf("%d ", find(i));
		}
		printf("\n");
	}
}
