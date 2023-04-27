#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		char a[1005][100];
		int n = 0;
		for(int i = 0; i < strlen(c); i++){
			c[i] = tolower(c[i]);
		}
		char *name = strtok(c, " ");
		while(name != NULL){
			strcpy(a[n], name);
			n++;
			name = strtok(NULL, " ");
		}
		printf("%s", a[n - 2]);
		for(int i = 0; i < n - 2; i++){
			printf("%c", a[i][0]);
		}
		printf("@xyz.edu.vn");
		printf("\n");
		char *pass = strtok(a[n - 1], "/");
		while(pass != NULL){
			int so = atoi(pass);
			printf("%d", so);
			pass = strtok(NULL, "/");
		}
		printf("\n");
	}
}
