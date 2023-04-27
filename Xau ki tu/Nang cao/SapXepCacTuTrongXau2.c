#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int tn(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l <= r){
		if(c[l] != c[r])
			return 0;
		l++; r--;
	}
	return 1;
}

char a[20000][50];

void sx(char c[][50], int n){
	for(int i = 1; i < n; i++){
		int pos = i - 1;
		char tmp[100];
		strcpy(tmp, a[i]);
		while(pos >= 0 && strlen(tmp) < strlen(a[pos])){
			strcpy(a[pos + 1], a[pos]);
			pos--;
		}
		strcpy(a[pos + 1], tmp);
	}
}

int main(){
	char c[100001];
	gets(c);
	int n = 0;
	char *word = strtok(c, " ");
	while(word != NULL){
		if(tn(word)){
			int check = 1;
			for(int j = 0; j < n; j++){
				if(strcmp(word, a[j]) == 0){
					check = 0; break;
				}
			}
			if(check){
			strcpy(a[n], word);
			n++;	
			}
		}
		word = strtok(NULL, " ");
	}
	sx(a, n);
	for(int i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
}
