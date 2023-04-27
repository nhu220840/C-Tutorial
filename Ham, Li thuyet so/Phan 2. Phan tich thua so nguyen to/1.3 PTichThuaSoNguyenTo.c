#include <stdio.h>
#include <math.h>
void pt3(int n){
	int cnt = 0;
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			int cnt = 0;
			while(n%i == 0){
				cnt++;
				n/=i;
			}
			printf("%d(%d) ",i, cnt);
		}
	}
	if(n != 1) printf("%d(1) ", n);
}

int main(){
	int n; scanf("%d", &n);
	pt3(n);
}
