#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=2*n; j++){
			if(j<=n-i+1 || j>n+i-1) printf("*");
			else printf("~");
		}
		printf("\n");
	}
	for(i=n-1; i>=1; i--){
		for(j=1; j<=2*n; j++){
			if(j<=n-i+1 || j>n+i-1) printf("*");
			else printf("~");
		}
		printf("\n");
	}
}
