#include <stdio.h>
int main (){
	int a = 1000000, b = 1000000;
	int tong = a + b;
	int hieu = a - b;
	long long tich = 1ll * a * b;
	float thuong = 1.0 * a / b;
	printf("%d %d %lld %.2f", tong, hieu, tich, thuong);
}
