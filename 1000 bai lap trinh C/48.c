#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int prd = 1;
	while(n != 0){
		int r = n%10;
		if(r%2 != 0) prd *= r;
		n/=10;
	}
	printf("%d", prd);
}
