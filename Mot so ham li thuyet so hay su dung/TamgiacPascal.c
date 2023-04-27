#include <stdio.h>

#define ll long long

// 1 = C0 0
// 1 1 = C0 0  C0 1
// 1 2 1 = C0 0  C0 1  C0 2
// 1 3 3 1 = C0 0  C0 1  C0 2  C0 3
// 1 4 6 4 1 = C0 0  C0 1  C0 2  C0 3  C0 4
// 1 5 10 10 5 1 = C0 0  C0 1  C0 2  C0 3  C0 4  C0 5

long long tohop(int n, int k){
	long long res = 1;
	for(int i = 1; i <= k; i++){
		res *= (n-i+1);
		res /= i;
	}
	return res;
}

//dung de quy
ll tohop2(int k, int n){
	if(k == n || k == 0)
		return 1;
	else
		//Cong thuc Pascal: C k n = C k - 1 n - 1 + C k n - 1
		return tohop2(k, n - 1) + tohop2(k - 1, n - 1);
}


int main(){
	long long n; scanf("%lld", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			printf("%lld ", tohop(i, j));
		}
		printf("\n");
	}
}
