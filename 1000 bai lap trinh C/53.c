#include <stdio.h>
int main(){
	long long n; scanf("%lld", &n);
	int max = -1e9;
	int cnt = 0;
	while(n != 0){
		int r = n%10;
		if(r >= max){
			max = r;
			if(r == max) cnt++;
		}
		n/=10;
	}
	printf("%d", cnt);
}
