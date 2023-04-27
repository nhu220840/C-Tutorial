#include <stdio.h>
int min(int a, int b){
	if(a>b) return b;
	return a;
}
// Kcach tu 1 so den 4 hang i=1, i=2n-1, j=1, j=2n-1
// Gia su toa do cua so 3 la A(i,j) = A(2,5)
// Kc lan luot la 1,5,4,2
// Cthuc tinh kc:
// -- den i=1: i-1
// -- den i=2n-1: 2n-1-i
// -- den j=1: j-1
// -- den j=2n-1: 2n-1-j
// Tim kc nho nhat trong 4 kc tren
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=2*n-1; i++){
		for(j=1; j<=2*n-1; j++){
			int min_dis = min(min(i-1, 2*n-1-i), min(j-1, 2*n-1-j));
			printf("%d", n-min_dis);
		}
		printf("\n");
	}
}
