#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

int main(){
	char c[1005];
	scanf("%s", c);
	int sum = 0;
	for(int i = 0; i < strlen(c); i++){
		if(nt(c[i] - '0') == 1){
			sum += c[i] - '0';
		}
		else{
			printf("NO");
			return 0;
		}
	}
	if(nt(sum))
		printf("YES");
	else
		printf("NO");
}
