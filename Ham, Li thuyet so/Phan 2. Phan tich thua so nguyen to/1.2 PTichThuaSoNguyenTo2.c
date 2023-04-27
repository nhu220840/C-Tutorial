#include <stdio.h>
#include <math.h>
void pt2(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		printf("%d ", i);
		while(n%i == 0){
			n/=i;
		}
	}
	if(n != 1) printf("%d ", n);
}

int main(){
	int n; scanf("%d", &n);
	pt2(n);
}
