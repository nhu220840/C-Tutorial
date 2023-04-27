#include <stdio.h>

#define ll long long

ll sum(ll n){
    if(n < 10)
        return n;
    else
        return n % 10 + sum(n / 10); 
}

int main(){
    ll n; scanf("%lld", &n);
    printf("%lld", sum(n));
}