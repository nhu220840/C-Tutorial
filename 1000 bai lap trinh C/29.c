#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	int max = 1;
	for(i=1; i<=n/2; i++){
		if(n%i == 0 && i%2 != 0){
			if(i>max) max = i;
		}
	}
	printf("%d", max);
}
