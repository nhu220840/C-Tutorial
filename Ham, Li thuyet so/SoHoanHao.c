#include <stdio.h>
#include <math.h>

#define ll long long
//su dung dinh li O-clit O-le
// neu p la so nguyen to
// 2^p-1 la so nguyen to
// thi 2^(p-1)*(2^p-1) la 1 so hoan hao

int nt(ll n){
    if(n<2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int hh(ll n){
    for(int i = 2; i <= 32; i++){
        if(nt(i)){
            ll tmp = 1ll*pow(2,i) - 1;
            if(nt(tmp)){
                ll num = 1ll*pow(2,i-1)*(pow(2,i)-1);
                if(num == n)
                	return 1;
            }
        }
    }
    return 0;
}

int main(){
	ll n; scanf("%lld", &n);
	if(hh(n))
		printf("YES");
	else
		printf("NO");
}


