#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    ll a, b; scanf("%lld %lld", &a, &b);
    printf("%lld %lld", gcd(a, b), lcm(a, b));
}