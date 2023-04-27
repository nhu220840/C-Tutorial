#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void  *a, const void *b){
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
	int stand = a[0]; //stand: suc chiu  dung cua vien gach
	int cnt = 1;
	for(int i = 1; i < n; i++){
		if(stand <= 0) break;
		else{
			stand = fmin(stand - 1, a[i]);
			cnt++;
		}
	}
	printf("%d", cnt);
}
