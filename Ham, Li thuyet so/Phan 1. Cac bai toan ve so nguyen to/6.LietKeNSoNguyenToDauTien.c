#include <stdio.h>
#include <math.h>
int nto(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n>1;
}

int main(){
	int n; scanf("%d" ,&n);
	int i = 0, cnt = 0;
	while(cnt < n){
		if(nto(i) == 1){
			printf("%d\n", i);
			cnt++;
		} 
		i++;
	}
}
