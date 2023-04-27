#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10001];
	scanf("%s", c);
	if((c[strlen(c) - 1] - '0') % 2 != 0){
		printf("NO");
	}
	else{
		long long sum = 0;
		for(int i = 0; i < strlen(c); i++){
			sum += c[i] - '0';
		}
		if(sum % 3 == 0){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
}
