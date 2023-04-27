#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int prd = 1;
	while(n != 0){
		prd *= n%10;
		n/=10;
	}
	printf("%d", prd);
}
