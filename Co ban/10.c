#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	float n = a;
	float Sn = 1.0 * (1-1/(n+1));
	printf("%.2lf", Sn);
}
