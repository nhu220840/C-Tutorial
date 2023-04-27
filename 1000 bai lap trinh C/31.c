#include <stdio.h>
#include <math.h>
int check(int n){
	if(n<2) return 0;
	else{
		int i;
		for(i=2; i<=sqrt(n); i++){
			if(n%i == 0) return 0;
		}
		return 1;
	}
}

int main(){
	int n; scanf("%d", &n);
	if(check(n) == 1) printf("YES");
	else printf("NO");
}
