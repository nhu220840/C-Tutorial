#include <stdio.h>

#define ll long long

int check(ll n){
    if(n < 10){
        if(n % 2 != 0)
            return 0;
    }
    else{
        int r = n % 10;
        if(r % 2 != 0)
            return 0;
        else
            return check(n / 10);
    }
}

int main(){
    ll n; scanf("%lld", &n);
    if(check(n) == 1)
        printf("YES");
    else
        printf("NO");
}