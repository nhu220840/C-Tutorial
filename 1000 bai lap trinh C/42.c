#include <stdio.h>
int main(){
	int S = 0;
	int i = 0;
	int n; scanf("%d", &n);
	while (S + i < n){
		i++;
		S += i;
	}
	printf("%d", i);
}
