#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *y - *x;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	long long sum = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > i){
			sum += a[i] - i;
		}
		else break;
	}
	printf("%lld", sum);
}
