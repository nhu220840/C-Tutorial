#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void thuong(char c[]){
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int main(){
	char S[10001], T[10001];
	gets(S);
	gets(T);
	thuong(S);
	thuong(T);
	char a[1000][100], b[1000][100];
	int n = 0, m = 0;
	char *word1 = strtok(S, " ");
	while(word1 != NULL){
		strcpy(a[n], word1);
		n++;
		word1 = strtok(NULL, " ");
	}
	char *word2 = strtok(T, " ");
	while(word2 != NULL){
		strcpy(b[m], word2);
		m++;
		word2 = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i = 0; i < n; i++){
		while(i < n && strcmp(a[i], a[i + 1]) == 0){
			i++;
		}
		int check = 1;
		for(int j = 0; j < m; j++){
			if(strcmp(a[i], b[j]) == 0){
				check = 0; break;
			}
		}
		if(check == 1){
			printf("%s ", a[i]);
		}
	}
}
