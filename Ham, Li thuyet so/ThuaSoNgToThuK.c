#include <stdio.h>
#include <math.h>

int ptich(int n, int k){
    int cnt = 0;
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            while(n%i == 0){
                cnt++;
                n /= i;
                if(cnt == k)
                	return i;
            }	
        }
    }
    if(n != 1){
        cnt++;
    }
    if(cnt == k) 
        return n;
    return -1;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", ptich(n,k));
}
