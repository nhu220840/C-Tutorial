#include <stdio.h>
int main(){
	long long n; scanf("%lld", &n);
	int min = 1e9;
	while(n != 0){
		int r = n%10;
		if(r < min) min = r;
		n/=10;
	}
	printf("%d", min);
}
