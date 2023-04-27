#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10001];
	gets(c);
	int alpha = 0, digit = 0, special = 0;
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			alpha++;
		}
		else if(isdigit(c[i])){
			digit++;
		}
		else{
			special++;
		}
	}
	printf("%d %d %d", alpha, digit, special);
}
