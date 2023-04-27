#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	//Xay dung nua tam giac tren 5 dong
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	//Xay dung nua tam giac duoi 4 dong
	for(i=n-1; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("*");	
		}
		printf("\n");
	}
}
