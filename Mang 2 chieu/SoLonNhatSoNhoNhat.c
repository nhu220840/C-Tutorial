#include <stdio.h>
#include <math.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max_val = -1e9 - 1, min_val = 1e9 + 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			min_val = fmin(min_val, a[i][j]);
			max_val = fmax(max_val, a[i][j]);
		}
	}
	printf("%d\n", min_val);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == min_val){
				printf("%d %d\n", i + 1, j + 1);
			}
		}
	}
	printf("%d\n", max_val);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == max_val){
				printf("%d %d\n", i + 1, j + 1);
			}
		}
	}
}
