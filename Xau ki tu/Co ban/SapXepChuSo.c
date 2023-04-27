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
	int i = 0;
	while(i < strlen(c) - 1 && c[i] == '0'){
		i++;
	}
	for(int j = i; j < strlen(c); j++){
		printf("%c", c[j]);
	}
}
