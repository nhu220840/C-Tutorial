#include <stdio.h>
#include <math.h>

#define ll long long

int dem[1000001];

int main(){
	int n; scanf("%d", &n);
	int a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
		max = fmax(max, a[i]);
	}
	ll cnt = 0;
	for(int i = 0; i <= max; i++){
		if(dem[i] != 0){
			cnt += 1ll * dem[i] * (dem[i] - 1) / 2;
		}
	}
	printf("%lld", cnt);
}
