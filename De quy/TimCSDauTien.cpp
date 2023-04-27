#include <stdio.h>

#define ll long long

void first(ll n){
    if(n < 10)
        printf("%lld", n);
    else
        first(n / 10);
}

int main(){
    ll n; scanf("%lld", &n);
    first(n);
}