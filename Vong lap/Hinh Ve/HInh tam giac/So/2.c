#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j; 
	for(i=1; i<=n; i++){
		int cnt = i;
		int init = n-1;
		for(j=1; j<=i; j++){
			printf("%d ", cnt);
			cnt += init;
			init--;
			
		}
		printf("\n");
	}
}
