#include <stdio.h>
int gcd(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int a, b; scanf("%d %d", &a, &b);
	int i;
	for(i=a; i<b; i++){
		int j;
		for(j=i+1; j<=b; j++){
			if(gcd(i, j) == 1) printf("(%d,%d)\n", i, j);		
		}
	}
}
