#include <stdio.h>
#include <math.h>
int nto(int n){
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
	int n; scanf("%d", &n);
	if(nto(n)) printf("YES");
	else printf("NO");
}
