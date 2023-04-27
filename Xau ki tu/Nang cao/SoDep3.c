#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tang(char c[]){
	for(int i = 1; i < strlen(c); i++){
		if(c[i] < c[i - 1])
			return 0;
	}
	return 1;
}

int giam(char c[]){
	for(int i = 1; i < strlen(c); i++){
		if(c[i] > c[i - 1])
			return 0;
	}
	return 1;
}

int main(){
	char c[1005];
	scanf("%s", c);
	if(tang(c) || giam(c))
		printf("YES");
	else
		printf("NO");
}
