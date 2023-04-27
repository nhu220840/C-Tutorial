#include <stdio.h>
int main(){
	int dong, cot; scanf("%d %d", &dong, &cot);
	int i, j;
	for(i=1; i<=dong; i++){
		for(j=1; j<=cot+i-1; j++){
			if(i>j) printf("~");
			else printf("*");
		}
		printf("\n");
	}
}
