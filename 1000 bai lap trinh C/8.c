#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	float sum = 0;
	int i;
	for(i=0; i<=n; i++){
		sum += 1.0*(2*i+1)/(2*i+2); 
	}
	printf("%f", sum);
}
