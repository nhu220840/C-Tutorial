#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int cmp2(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	if(strlen(x) != strlen(y))
		return strlen(x) - strlen(y);
	else
		return strcmp(x, y);
}

int main(){
	char c[1000001];
	gets(c);
	char a[10000][100];
	int n = 0;
	char *word = strtok(c, " ");
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
	qsort(a, n, sizeof(a[0]), cmp2);
	for(int i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
}
