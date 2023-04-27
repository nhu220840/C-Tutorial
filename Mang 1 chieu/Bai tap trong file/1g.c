#include <stdio.h>
#include <math.h>
int kiemtra(int n){
	n = abs(n);
	while(n != 0){
		int e = n%10;
		if(e % 2 == 0) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for(i=0; i<n; i++){
		if(kiemtra(a[i]) == 1) cnt++;
	}
	printf("%d\n", cnt);
	for(i=0; i<n; i++){
		if(kiemtra(a[i]) == 1) printf("%d ", a[i]);
	}
}
