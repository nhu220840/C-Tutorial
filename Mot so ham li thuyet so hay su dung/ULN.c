#include <stdio.h>
#include <math.h>
int ULN(int n){
    int res = 0;
    int i;
    for(i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            res = i;
            while(n%i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) res = n;
    return res;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; 
        scanf("%d", &n);
        printf("%d\n", ULN(n));
    }
}
