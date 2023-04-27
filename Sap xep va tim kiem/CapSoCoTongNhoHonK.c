#include <stdio.h>
#include <stdlib.h>

int last(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] < x){
			res = m;
			l = m + 1;
		}
		else
			r = m - 1;
	}
	return res;
}

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	long long cnt = 0;
	for(int i = 0; i < n; i++){
		int l = i + 1, r = n - 1;
		int p2 = last(a, l, r, k - a[i]);
		if(p2 != -1)
			cnt += p2 - i;
	}
	printf("%lld", cnt);
}

