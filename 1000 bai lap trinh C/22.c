#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int product = 1;
	int i;
	for(i=1; i<=n; i++){
		if(n%i == 0) product *= i;
	}
	printf("%d", product);
}
