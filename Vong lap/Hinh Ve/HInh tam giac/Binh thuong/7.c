#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n-i; j++){
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++){
			if(i==1 || i==n || j==1 || j==2*i-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
