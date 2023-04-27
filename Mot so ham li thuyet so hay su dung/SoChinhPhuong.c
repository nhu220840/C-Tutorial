#include <stdio.h>
#include <math.h>
int SoChinhPhuong(long long n){
	long long can = sqrt(n);
	if(can*can == n) 
		return 1;
	else 
		return 0;
}

int main(){
	long long n; scanf("%lld", &n);
	if(SoChinhPhuong(n))
		printf("YES");
	else 
		printf("NO");
}
