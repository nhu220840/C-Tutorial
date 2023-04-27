#include <stdio.h>

int linearSearch(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			return 1;
	}
	return 0;
}

int main(){
	int n, x; scanf("%d %d", &n, &x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", linearSearch(a, n, x));
}
