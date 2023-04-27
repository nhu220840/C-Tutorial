#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	float sum = 0;
	int i; 
	for(i=0; i<=n; i++){
		int c = i++;
		sum += 1.0/c*i;
	}
	printf("%f", sum);
}
