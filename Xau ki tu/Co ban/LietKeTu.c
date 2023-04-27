#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10001];
	gets(c);
	char* word = strtok(c, ".,!? ");
	char a[100][100];
	int n = 0;
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, ".,!? ");
	}
	for(int i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
}
