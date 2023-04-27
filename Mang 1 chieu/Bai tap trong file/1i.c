#include <stdio.h>
int check(int n){
	int c1 = 0, c9 = 0;
	while(n != 0){
		int r = n%10;
		if(r==1) c1 = 1;
		if(r==9) c9 = 1;
		n/=10;
	}
	if(c1 == 1 && c9 == 1) return 1;
}


int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int ok = 0;
	for(i=0; i<n; i++){
		if(check(a[i]) == 1){
			printf("%d ", a[i]);
			ok = 1;
		}
	}
	if(ok == 0) printf("-1");
}
