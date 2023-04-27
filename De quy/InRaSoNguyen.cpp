#include <stdio.h>

#define ll long long

void in1(ll n){
    if(n < 10){
        printf("%d ", n % 10);
    }
    else{
        in1(n / 10);
        printf("%d ", n % 10);
    }
}

void in2(ll n){
    if(n < 10)
        printf("%d", n % 10);
    else{
        printf("%d ", n % 10);
        in2(n / 10);
    }
}

int main(){
    ll n; scanf("%lld", &n);
    in1(n);
    printf("\n");
    in2(n);
}