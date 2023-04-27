#include <stdio.h>

#define ll long long

void hexa(ll n){
    if(n != 0){
        hexa(n / 16);
        int x = n % 16;
        if(x < 10)
            printf("%d", x);
        else
            printf("%c", 65 + x - 10);
    }
}

int main(){
    ll n; scanf("%lld", &n);
    if(n == 0)
        printf("0");
    else
        hexa(n);
}