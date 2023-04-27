#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	float sum = 0;
	for(i=2; i<=2*n; i+=2){
		sum += 1.0/i;
	}
	printf("%.2f", sum);
}

