#include <stdio.h>
int main(){
	char kitu;
	scanf("%c", &kitu);
	if((kitu >= 'a' && kitu <= 'z') || (kitu >= 'A' && kitu <= 'Z')){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
