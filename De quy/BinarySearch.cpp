#include <stdio.h>

int bs(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x)
            return 1;
        else if(a[m] < x)
            r = m - 1;
        else
            l = m + 1;
    }
    return 0;
}

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int x; scanf("%d", &x);
    printf("%d", bs(a, n, x));
}