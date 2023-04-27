#include <stdio.h>
#include <math.h>
//cach don gian sd ct Ck n = n!/k!(n-k)!
long long gt(int n){
	long long gt = 1;
	for(int i=1; i<=n; i++){
		gt *= i;
	}
	return gt;
}

long long tohop1(int n, int k){
	return gt(n) / (gt(k) * gt(n-k));
}

//cach toi uu hon
// rut gon ct 
// Ck n = n(n-1)(n-2)...(n-k+1)(n-k)!/k!(n-k)!
//       = n(n-1)(n-2)...(n-k+1)/k!
//       = n(n-1)(n-2)...(n-k+1)/1.2.3...k

// co the toi uu bang cach sd ct Ck n = Cn-k n
// VD C8 10 = C2 10;

long long tohop2(int n, int k){
	k = fmin(k, n-k);
	long long res = 1;
	for(int i = 1; i <= k; i++){
		res *= (n-i+1);
		res /= i;
	}
	return res;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%lld", tohop2(n, k));
}
