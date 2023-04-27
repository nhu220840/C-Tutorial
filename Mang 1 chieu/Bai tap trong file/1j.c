#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(a==0 && a[0]*a[1] < 0) printf("%d ", a[0]);
		else if(a==n-1 && a[n-1]*a[n-2] < 0) printf("%d ", a[n-1]);
		else if(a[i]*a[i-1] < 0 || a[i]*a[i+1] < 0) printf("%d ", a[i]);
	}
}
