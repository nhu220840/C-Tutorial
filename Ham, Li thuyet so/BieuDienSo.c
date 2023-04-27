#include <stdio.h>
// de dang nhan thay nhung so tu 1111 tro di co the bieu dien thanh 2 so 111 va 11
// 11111 = 111*100 + 11;
// vay nen bai toan quy ve tim nghiem nguyen cua pt 11x+111y=n

int check(int n){
	for(int i = 0; i <= n/111; i++){
		int tmp = n - 111*i;
		if(tmp % 11 == 0)
			return 1;
	}
	return 0;
}

int main(){
	int n; scanf("%d", &n);
	if(check(n))
		printf("YES");
	else
		printf("NO");
}
