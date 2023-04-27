#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	char c[1000];
	scanf("%s", c);
	int check = 1;
	for(int i = 1; i < strlen(c); i++){
		if(abs(c[i] - c[i - 1]) != 1){
			check = 0;
		}
	}
	if(check == 1)
		printf("YES");
	else
		printf("NO");
}
