#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	if(*x < *y)
		return -1;
	else
		return 1;
}

int main(){
	int n, k; scanf("%d %d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 1;
	qsort(a, n, sizeof(int), cmp);
	for(int i = 1; i < n; i++){
		if(a[i] - a[i - 1] > k){
			cnt++;
		}
	}
	printf("%d", cnt);
}
