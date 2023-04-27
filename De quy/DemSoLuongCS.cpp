#include <stdio.h>

#define ll long long

int cnt(ll n){
    if(n < 10)
        return 1;
    else
        return 1 + cnt(n / 10);
}

int main(){
    ll n; scanf("%lld", &n);
    printf("%d", cnt(n));
}