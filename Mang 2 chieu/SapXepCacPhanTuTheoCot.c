#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}

int main(){
	int n; scanf("%d", &n);
	int a[n][n], b[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		qsort(b[i], n, sizeof(int), cmp);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", b[j][i]);
		}
		printf("\n");
	}
}
