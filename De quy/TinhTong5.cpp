#include <stdio.h>

double sum(int n){
    if(n == 1)
        return 1.0;
    else
        return 1.0 / n + sum(n - 1);
}

int main(){
    int n; scanf("%d", &n);
    printf("%.3lf", sum(n));
}