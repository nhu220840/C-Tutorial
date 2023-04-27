#include <stdio.h>
int main(){
	long long n;
	scanf("%lld", &n);
	int cnt = 0;
	while(n != 0){
		if(n%10 == 2 || n%10 == 3 || n%10 ==5 || n%10 ==7){
			cnt++;
		}
		n/=10;
	}
	printf("%d", cnt);
}
