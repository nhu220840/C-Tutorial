#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int ok = 1;
	for(int i = 0; i < n; i++){
		if(a[i] <= a[i-1]){
			printf("NO");
			ok = 0;
		}
	}
	if(ok == 1) printf("YES");
}
