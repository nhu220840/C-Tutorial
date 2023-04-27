#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10001];
	scanf("%s", c);
	int d = 0, a = 0;
	char digit[10001], alpha[10001];
	for(int i = 0; i < strlen(c); i++){
		if(isdigit(c[i])){
			digit[d] = c[i];
			d++;
		}
		else if(isalpha(c[i])){
			alpha[a] = c[i];
			a++;
		}
	}
	for(int i = 0; i < d; i++){
		printf("%c", digit[i]);
	}
	printf("\n");
	for(int i = 0; i < a; i++){
		printf("%c", alpha[i]);
	}
}
