#include <stdio.h>
#include <math.h>

int dem[1000001];

int main(){
	int n; scanf("%d", &n);
	int l = 1e9, r = -1e9;
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]] = 1;
		l = fmin(l, a[i]);
		r = fmax(r, a[i]);
	}
	long long cnt = 0;
	for(int i = l; i <= r; i++){
		if(dem[i] == 0) cnt++;
	}
	printf("%lld", cnt);
}
