#include <stdio.h>
//vd: tim ucln(18,8)
//gcd(b,a%b)
//gcd(18,8)	
//gcd(8,2)
//gcd(2,0)
//khi b = 0 thi ucln la a

int ucln(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int a, b; scanf("%d %d", &a, &b);
	printf("%d", ucln(a,b));
}
