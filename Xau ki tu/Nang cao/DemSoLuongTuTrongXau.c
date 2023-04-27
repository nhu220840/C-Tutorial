#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[100001];
	gets(c);
	char a[10000][100];
	int cnt = 0;
	char* word = strtok(c, " ");
	while(word != NULL){
		cnt++;
		strcpy(a[cnt], word);
		word = strtok(NULL, " ");
	}
	printf("%d", cnt);
}
