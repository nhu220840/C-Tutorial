#include <stdio.h>

#define ll long long

//So luong so 0 tan cung = so luong so 10 trong ptich cua n!
	
int so10(ll n){
	//chi can tim so lan xuat hien cua 5
	//boi vi trong n! chac chan so lan xuat hien cua 2 nhieu hon 5
	ll s5 = 0;
	for(int i = 5; i <= n; i *= 5){
		s5 += n/i;
	}
	return s5;
}

int main(){
	ll n; scanf("%lld", &n);
	printf("%d", so10(n));
}
