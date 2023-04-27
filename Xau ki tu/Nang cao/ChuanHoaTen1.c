#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ten(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int main(){
	char c[100001];
	char d[100001];
	gets(c);
	gets(d);
	char *name = strtok(c, " ");
	while(name != NULL){
		ten(name);
		printf("%s ", name);
		name = strtok(NULL, " ");
	}
	printf("\n");
	char *birth = strtok(d, "/");
	while(birth != NULL){
		if(strlen(birth) == 1){
			printf("0%s", birth);
		}
		else{
			printf("%s", birth);
		}
		if(strlen(birth) != 4){
			printf("/");
		}
		birth = strtok(NULL, "/");
	}
}
