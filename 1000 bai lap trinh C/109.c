#include <stdio.h>
int main(){
	printf("BANG CUU CHUONG\n");
	int i;
	for(i=1; i<=10; i++){
		printf("\nBang nhan %d\n", i);
		int j;
		for(j=0; j<=10; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
}
