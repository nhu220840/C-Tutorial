#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int res;
	if(a>b){
		res = a;
		a = b;
		b = res;
	}
	if(a>c){
		res = a;
		a = c;
		c = res;
	}
	if(b>c){
		res = b;
		b = c;
		c = res;
	}
	printf("%d %d %d", a, b, c);
}
