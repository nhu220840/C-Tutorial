#include <stdio.h>
#include <string.h>
#include <ctype.h>

int inhoa(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(islower(c[i]))
			return 0;
	}
	return 1;
}

int main(){
	char c[10001];
	gets(c);
	char* word = strtok(c, " ");
	int cnt = 0;
	while(word != NULL){
		if(inhoa(word) == 1)
			cnt++;
		word = strtok(NULL, " ");
	}
	printf("%d", cnt);
}
