#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

void thuong(char c[]){
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int main(){
	char S[10001], T[10001];
	gets(S);
	gets(T);
	thuong(S);
	thuong(T);
	char a[1000][50], b[1000][50];
	int n = 0, m = 0;
	char *word = strtok(S, " ");
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, " ");
	}
	char *al = strtok(T, " ");
	while(al != NULL){
		strcpy(b[m], al);
		m++;
		al = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i = 0; i < n; i++){
		//loai tru tat ca nhung tu giong nhau chi lay tu cuoi cung ra xet
		//VD: S: aa aa aa abc abc d
		//    T: aa abc abc 
		//thi minh se lay "aa" o vi tri thu i = 2 cua xau S de xet voi xau T
		while(i < n && strcmp(a[i], a[i + 1]) == 0){
			i++;
		}
		int check = 0;
		for(int j = 0; j < m; j++){
			if(strcmp(a[i], b[j]) == 0){
				check = 1; break;
			}
		}
		if(check){
			printf("%s ", a[i]);
		}
	}
}
