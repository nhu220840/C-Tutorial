#include <stdio.h>
#include <math.h>
int SoThuanNghich(int n){
    int num = 0, tmp = n;
    while(n){
        num = num*10 + n%10;
        n /= 10;
    }
    if(num == tmp) return 1;
    else return 0;
}


int main(){
    int n; scanf("%d", &n);
    if(SoThuanNghich(n)) printf("YES");
    else printf("NO");
}
