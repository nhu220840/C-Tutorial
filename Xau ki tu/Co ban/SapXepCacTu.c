#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int main(){
	char c[10001];
	gets(c);
	char a[10000][50];
	int n = 0;
	char* word = strtok(c, " ");
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
	printf("\n");
	for(int i = n - 1; i >= 0; i--){
		printf("%s ", a[i]);
	}
}
