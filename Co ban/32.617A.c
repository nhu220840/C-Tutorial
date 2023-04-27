#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	if(x%5==1 || x%5==2 || x%5==3 || x%5==4){
		printf("%d", x/5 + 1);
	}
	else{
		printf("%d", x/5);
	}
}
