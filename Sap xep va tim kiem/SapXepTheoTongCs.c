#include <stdio.h>
#include <stdlib.h>

int tongcs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	if(tongcs(*x) != tongcs(*y)){
		return tongcs(*x) - tongcs(*y);
	}
	else{
		return *x - *y;
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
