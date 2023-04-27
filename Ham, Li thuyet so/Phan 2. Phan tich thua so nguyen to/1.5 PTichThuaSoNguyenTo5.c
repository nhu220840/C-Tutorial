#include <stdio.h>
#include <math.h>
void pt5(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			int cnt = 0;
			while(n%i == 0){
				cnt++; 
				n/=i;
			}
			printf("%d^%d ", i, cnt);
			if (n != 1) printf("* ");
		}
	}
	if(n != 1) printf("%d^1", n);
}
int main(){
	int n; scanf("%d" ,&n);
	printf("%d = ", n);
	pt5(n);
}
