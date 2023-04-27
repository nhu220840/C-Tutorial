#include <stdio.h>
int main(){
	long long n; scanf("%lld", &n);
	int min = 1e9;
	int cnt = 0;
	while(n != 0){
		int r = n%10;
		if(r <= min){
			min = r;
			if(r == min) cnt++;
		}
		n/=10;
	}
	printf("%d", cnt);
}
