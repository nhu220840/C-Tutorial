#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=n; i>=1; i--){
		for(j=1; j<=n; j++){
			if(i>=j) printf("*");
			else printf("~");
		}
		printf("\n");
	}
}
