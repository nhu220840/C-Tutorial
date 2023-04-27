#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int prd = 1;
	int i; 
	for(i=1; i<=n; i++){
		if(n%i == 0 && i% 2 != 0) prd *= i;
	}
	printf("%d", prd);
}
