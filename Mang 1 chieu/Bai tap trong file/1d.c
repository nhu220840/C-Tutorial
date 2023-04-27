#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int res = 1e9 + 1, idx;
	for(i=0; i<n; i++){
		if(a[i] < res){
			res = a[i];
			idx = i;
		}
	}
	printf("%d", idx);
}
