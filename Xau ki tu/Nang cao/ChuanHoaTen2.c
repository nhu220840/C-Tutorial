#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ho(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

void ten(char c[]){
	for(int i = 0; i < strlen(c); i++){
		c[i] = toupper(c[i]);
	}
}

int main(){
	char c[1005];
	gets(c);
	char a[1000][100];
	int n = 0;
	char *name = strtok(c, " ");
	while(name != NULL){
		strcpy(a[n], name);
		n++;
		name = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		if(i == n - 2){
			ho(a[i]);
			printf("%s, ", a[i]);
		}
		else if(i == n - 1){
			ten(a[i]);
			printf("%s", a[i]);
		}
		else{
			ho(a[i]);
			printf("%s ", a[i]);
		}
	}
	printf("\n");
	ten(a[n - 1]);
	printf("%s, ", a[n - 1]);
	for(int i = 0; i < n - 1; i++){
		if(i == n - 2){
			ho(a[i]);
			printf("%s ", a[i]);
		}
		else{
			ho(a[i]);
			printf("%s ", a[i]);
		}
	}
}
