#include <stdio.h>
#include <math.h>

#define ll long long

int count(ll n, ll p){
	int ans = 0;
	for(int i = p; i <= n; i += p){
		int tmp = i;
		while(tmp % p == 0){
			ans++;
			tmp /= p;
		}
	}
	return ans;
}

int count2(ll n, ll p){
	ll ans = 0;
	for(int i = p; i <= n; i *= p){
		ans += n/i;
	}
	return ans;
}

int main(){
	ll n, p; scanf("%lld %lld", &n, &p);
	printf("%d", count2(n, p));
}
