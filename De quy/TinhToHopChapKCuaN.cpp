#include <stdio.h>

int C(int k, int n){
    if(k == 0 || k == n)
        return 1;
    else
        return C(k - 1, n - 1) + C(k, n - 1);
}

int main(){
    int n, k; scanf("%d %d", &n, &k);
    printf("%d", C(k, n));
}