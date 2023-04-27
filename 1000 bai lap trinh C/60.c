#include <stdio.h>
int tang(long long n){
	while(n>=10){ //dam bao 1234 chi can 3 phep so sanh
		int r = n%10;
		if(r <= (n/10)%10) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	long long n; scanf("%lld", &n);
	if(tang(n)) printf("YES");
	else printf("NO");
}
