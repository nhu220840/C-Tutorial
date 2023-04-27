#include <stdio.h>
int kiemtra(int n){
	int res = 1;
	if(n<1) return 0;
	while(n>1){
		int mod = n%2;
		if(mod != 0) res = 0;
		n/=2;
	}
	if(res==1) return 1;
	else return 0;
}

int main(){
	int n; scanf("%d", &n);
	if(kiemtra(n)) printf("YES");
	else printf("NO");
}
