#include <stdio.h>
int check(int a[], int n){
	int i;
	for(i=0; i<n-1; i++){
		if(a[i] >= a[i+1]) return 0;
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
	if(check(a, n) == 1) printf("YES");
	else printf("NO");
}
