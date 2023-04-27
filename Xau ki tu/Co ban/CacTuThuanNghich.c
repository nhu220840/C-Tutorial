#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int checktn(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l <= r){
		if(c[l] != c[r]){
			return 0;
		}
		else{
			l++; r--;
		}
	}
	return 1;
}

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int main(){
	char c[10001];
	gets(c);
	char a[10001][100];
	int n = 0;
	char* word = strtok(c, " ");
	while(word != NULL){
		if(checktn(word)){
			strcpy(a[n], word);
			n++;
		}
		word = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
}
