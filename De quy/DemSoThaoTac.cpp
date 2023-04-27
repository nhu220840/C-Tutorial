#include <stdio.h>
#include <math.h>

int step(int n){
    if(n == 1)
        return 0;
    else{
        int res1 = 1e9, res2 = 1e9, res3 = 1e9;
        if(n % 2 == 0)
            res1 = step(n / 2) + 1;
        if(n % 3 == 0)
            res2 = step(n / 3) + 1;
        if(n > 1)
            res3 = step(n - 1) + 1;
        return fmin(fmin(res1, res2), res3);
    }
}

int main(){
    int n; scanf("%d", &n);
    printf("%d", step(n));
}