#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int sum = 0;
	int i;
	for(i=1; i<n; i++){
		if(i%2 != 0) sum += i;
	}
	printf("%d", sum);
}
