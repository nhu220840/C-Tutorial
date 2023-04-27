#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int kqua = ((a+b-1)/b)*b;
	printf("%d", kqua);
}
