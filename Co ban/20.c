#include <stdio.h>
int main(){
	char kitu;
	scanf("%c", &kitu);
	if(kitu >= 'A' && kitu <= 'Z'){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
