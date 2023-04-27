#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[1000];
	scanf("%s", c);
	if(strlen(c) % 2 == 0){
		printf("NOT FOUND");
	}
	else{
		printf("%c", c[(strlen(c) - 1) / 2]); 
	}
}
