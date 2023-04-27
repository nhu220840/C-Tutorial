#include <stdio.h>
int kiemtra(int n){
	int res = 1;
	if(n == 2 || n<1 ) return 0;
	while(n>=3){
		int mod = n%3;
		if(mod != 0) res = 0;
		n/=3;
	}
	if(res==1) return 1;
	else return 0;
}

int main(){
	int n; scanf("%d", &n);
	if(kiemtra(n)) printf("YES");
	else printf("NO");
}
