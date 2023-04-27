#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lat(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l <= r){
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		l++; r--;
	}
}

int main(){
	char c[10001];
	gets(c);
	char a[100][100];
	int n = 0;
	char* word = strtok(c, " "); 
	while(word != NULL){
		n++;
		strcpy(a[n], word);
		word = strtok(NULL, " ");
	}
	for(int i = 1; i <= n; i++){
		if(i % 2 != 0){
			printf("%s ", a[i]);
		}
		else{
			lat(a[i]);
			printf("%s ", a[i]);
		}
	}
}
