#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		//Xay dung vong for de in ra dau " "
		for(j=1; j<=n-i; j++){
			printf(" ");
		}
		//Xay dung vong for de in ra dau "*"
		for(j=1; j<=2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}
}
