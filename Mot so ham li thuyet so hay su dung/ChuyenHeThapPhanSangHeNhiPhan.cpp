#include <stdio.h>

#define ll long long

void binary(ll n){
    if(n != 0){
        binary(n / 2);
        printf("%d", n % 2);
    }
}

int main(){
    ll n; scanf("%lld", &n);
    if(n == 0)
        printf("0");
    else
        binary(n);
}