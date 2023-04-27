#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b){
	if(b == 0)
		return a;
	else 
		return gcd(b, a%b); 
}

int main(){
	int n; scanf("%d", &n);
	ll a[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	ll uc = 0;
	for(int i = 0; i < n; i++){
		uc = gcd(uc, a[i]); //uoc chung cua a[i] va tat ca nhung so truoc no
	}
	printf("%lld", uc);
}
