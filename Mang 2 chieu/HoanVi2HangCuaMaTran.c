#include <stdio.h>

void swap(int *a, int *b){
	int tmp = *a; 
	*a = *b;
	*b = tmp;
}

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int u, v; 
	scanf("%d %d", &u, &v);
	for(int i = 0; i < n; i++){
		swap(&a[u - 1][i], &a[v - 1][i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
