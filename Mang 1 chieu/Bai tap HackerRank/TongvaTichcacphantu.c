#include <stdio.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[n];
	ll tong = 0;
	ll tich = 1;
	ll ss = 1e9+7;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		tong += 1ll*a[i];
		tong %= ss;
		tich *= 1ll*a[i];
		tich %= ss;
	}
	printf("%lld\n%lld", tong, tich);
}
