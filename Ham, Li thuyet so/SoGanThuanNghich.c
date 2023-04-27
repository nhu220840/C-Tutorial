#include <stdio.h>
#include <math.h>

int check(long long n){
    long long a = n%10;
    long long num = 0;
    while(n){
        num = num*10 + n%10;
        n /= 10;
    }
    if(a == 2*(num%10) || (num%10) == 2*a)
        return 1;
    else 
        return 0;
}

int tn(long long n){
    long long a = n/10;
    long long lat = 0;
    while(a){
        lat = lat*10 + a%10;
        a /= 10;
    }
    long long moi = lat/10, tmp = lat/10;
    long long lat2 = 0;
    while(moi){
        lat2 = lat2*10 + moi%10;
        moi /= 10;
    }
    return lat2 == tmp;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if(check(n) && tn(n)) 
        printf("YES");
    else 
        printf("NO");
}
