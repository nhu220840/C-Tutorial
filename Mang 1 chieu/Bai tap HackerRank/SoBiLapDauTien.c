#include <stdio.h>
#include <math.h>

int dem[1000001];

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(dem[a[i]] != 0){
			printf("%d", a[i]);
			return 0;
		}
		else dem[a[i]] = 1;
	}
	printf("-1");
}
