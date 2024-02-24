#include <stdio.h>

#define ll long long
ll ucln(ll a, ll b){
	while(b != 0){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}

//su dung de quy
ll ucln2(ll a, ll b){
	if(b == 0)
		return a;
	else
		return ucln2(b, a%b);
}

ll bcnn(ll a, ll b){
	return a/ucln(a, b)*b; //a,b deu la so ll nhan vao se bi tran so nen phai lay a/ucln trc
}

int main(){
	ll a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld %lld", ucln2(a,b), bcnn(a,b));
}
