#include <stdio.h>
#include <math.h>
int Tongcs(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int smith(int n){
    int res = n;
    int i;
    int sum1 = Tongcs(n);
    int sum2 = 0;
    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            while(n%i == 0){
                sum2 += Tongcs(i);
                n /= i;
            }
        }
    }
    if(res == n) //day la so ngto nen tra ve 0 luon
        return 0;
    if(n != 1) sum2 += Tongcs(n); 
    if(sum1 == sum2) 
        return 1;
    else 
        return 0;
}

int main(){
    int n; scanf("%d", &n);
    if(smith(n)) printf("YES");
    else printf("NO");
}
