#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	if(x>=5){
		int fx = 2*pow(x,2) + 5*x + 9;
		printf("%d", fx);
	}
	else{
		int fx1 = -2*pow(x,2) + 4*x - 9;
		printf("%d", fx1);
	} 
}
