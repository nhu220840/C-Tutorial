#include <stdio.h>
#include <math.h>

#define ll long long

int mini(ll n){
    if(n < 10)
        return n;
    else
        return fmin(n % 10, mini(n / 10));
}

int maxi(ll n){
    if(n < 10)
        return n;
    else
        return fmax(n % 10, maxi(n / 10));
}

int main(){
    ll n; scanf("%lld", &n);
    printf("%d %d", maxi(n), mini(n));
}