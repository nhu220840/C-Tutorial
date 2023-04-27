#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10001];
	gets(c);
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			c[i] = toupper(c[i]);
		}
		else{
			c[i] = c[i];
		}
	}
	for(int i = 0; i < strlen(c); i++){
		printf("%c", c[i]);
	}
	printf("\n");
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			c[i] = tolower(c[i]);
		}
		else{
			c[i] = c[i];
		}
	}
	for(int i = 0; i < strlen(c); i++){
		printf("%c", c[i]);
	}
}
