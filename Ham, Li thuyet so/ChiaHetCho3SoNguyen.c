#include <stdio.h>
#include <math.h>

#define ll long long

ll gcd(ll a, ll b){
	while(b != 0){
		ll r = a%b;
		a = b; 
		b = r;
	}
	return a;
}

ll lcm(ll a, ll b){
	return a/gcd(a,b)*b;
}

int main(){
	int x, y, z, n;
	scanf("%d %d %d %d", &x, &y, &z, &n);
	ll bcnn = 1ll*lcm(lcm(x,y),z);
	ll thuong = 1ll*pow(10,n-1);
	ll kq = 1ll*(thuong + bcnn - 1)/bcnn * bcnn;
	if(kq < pow(10,n)) 
		printf("%lld", kq);
	else
		printf("-1");
}
