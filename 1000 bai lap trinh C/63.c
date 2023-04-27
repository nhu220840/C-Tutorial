#include <stdio.h>
int gcd(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b){
	return a*b/gcd(a,b); //bcnn = tich cua a va b chia cho ucln cua a va b
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", lcm(a,b));
}
