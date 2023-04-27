#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return *x - *y;
}

int main(){
	char c[10001];
	scanf("%s", c);
	qsort(c, strlen(c), sizeof(char), cmp);
	for(int i = 0; i < strlen(c); i++){
		printf("%c", c[i]);
	}
	printf("\n");
	for(int i = strlen(c) - 1; i >= 0; i--){
		printf("%c", c[i]); 
	}
}
