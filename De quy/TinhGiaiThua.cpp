#include <stdio.h>
#include <math.h>

int gt(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * gt(n - 1);
}

int main(){
    int n; scanf("%d", &n);
    printf("%d", gt(n));
}