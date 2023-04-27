#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[1005];
	scanf("%s", c);
	int sum = 0;
	for(int i = 0; i < strlen(c); i++){
		sum += c[i] - '0';
	}
	printf("%d", sum);
}
