#include <stdio.h>
#include <math.h>
int main(){
	int n; 
	int sum = 0;
	while(sum < 10000){
		n++;
		sum += n;
	}
	printf("%d", n);
}
