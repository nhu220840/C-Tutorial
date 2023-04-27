#include <stdio.h>
#include <math.h>
int main(){
	int n; scanf("%d", &n);
	int max = 1;
	int i;
	for(i=1; i<=n; i++){
		if((-1-sqrt(1+8*n))/2 < i && i < (-1+sqrt(1+8*n))/2){
			if(i>max) max = i;
		}
	}
	printf("%d", max);
}
