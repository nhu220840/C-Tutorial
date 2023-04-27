#include <stdio.h>
int main(){
	long long n; scanf("%lld", &n);
	int cnt = 0;
	long long num = 0;
	while(n != 0){
		int r = n%10;
		num = num*10 + r;
		n/=10;
	}
	int k = num%10;
	while(num != 0){
		int r = num%10;
		if(r == k) cnt++;
		num/=10;
	}
	printf("%d", cnt);
}
