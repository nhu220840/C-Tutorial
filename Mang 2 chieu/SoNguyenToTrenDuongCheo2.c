#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int idx = 0, dem[1000];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j || i == n - j - 1){
				if(nt(a[i][j])){
					dem[idx] = a[i][j];
					idx++;
				}
			}
		}
	}
	qsort(dem, idx, sizeof(int), cmp);
	int cnt = 0;
	if(idx != 0) cnt = 1;
	for(int i = 1; i < idx; i++){
		if(dem[i] != dem[i - 1]){
			cnt++;
		}
	}
	printf("%d", cnt);
}
