#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	float sum = 0;
	for(i=1; i<=n; i++){
		sum += 1/(1.0*i);
	}
	printf("%.3f", sum);
}
