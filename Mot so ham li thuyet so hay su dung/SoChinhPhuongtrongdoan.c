#include <stdio.h>
#include <math.h>
int main(){
    long long a, b; scanf("%lld %lld", &a, &b);
    int i;
    for(i=ceil(sqrt(a)); i<=sqrt(b); i++){
        printf("%lld ", 1ll*i*i);
    }
}
