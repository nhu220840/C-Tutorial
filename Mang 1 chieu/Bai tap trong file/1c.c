#include <stdio.h>
#include <math.h>
int nto(int n){
	if(n<2) return 0;
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i; 
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(nto(a[i]) == 1) printf("%d ", a[i]);
	}
}
