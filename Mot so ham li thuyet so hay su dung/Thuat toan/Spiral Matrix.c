#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	int dem = 1;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	while(dem <= n * n){
		//Xay dung canh tren cung h1: c1 => c2
		for(int i = c1; i <= c2; i++){
			a[h1][i] = dem++;
		}
		h1++;
		//Xay dung canh ben phai c2: h1 => h2
		for(int i = h1; i <= h2; i++){
			a[i][c2] = dem++;
		}
		c2--;
		//Xay dung canh duoi cung h2: c2 => c1
		for(int i = c2; i >= c1; i--){
			a[h2][i] = dem++;
		}
		h2--;
		//Xay dung canh ben trai c1: h2 => h1
		for(int i = h2; i >= h1; i--){
			a[i][c1] = dem++;
		}
		c1++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
