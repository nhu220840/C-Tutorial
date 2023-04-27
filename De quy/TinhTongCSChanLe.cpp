#include <stdio.h>

#define ll long long

int even(ll n){
    if(n < 10){
        if(n % 2 == 0)
            return n;
        else
            return 0;
    }
    else{
        int r = n % 10;
        if(r % 2 == 0)
            return r + even(n / 10);
        else
            return even(n / 10);
    }
}

int odd(ll n){
    if(n < 10){
        if(n % 2 != 0)
            return n;
        else
            return 0;
    }
    else{
        int r = n % 10;
        if(r % 2 != 0)
            return r + odd(n / 10);
        else
            return odd(n / 10);
    }
}

int main(){
    ll n; scanf("%lld", &n);
    printf("%d\n%d", even(n), odd(n));
}