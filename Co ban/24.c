#include <stdio.h>
int main(){
	char kitu;
	scanf("%c", &kitu);
	if(kitu >= 'a' && kitu <= 'z'){
		kitu -= 32;
		printf("%c", kitu);
	}
	else{
		printf("%c", kitu);
	}
}
