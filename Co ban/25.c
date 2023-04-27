#include<stdio.h>
int main()
{
	char kitu;
	scanf("%c", &kitu);
	if(kitu >= 65 && kitu < 90) 
	{
		printf("%c", kitu+33);
	}
	else if(kitu >= 97 && kitu < 122)
	{
		printf("%c", kitu+1);
	}
	else if(kitu == 90 || kitu == 122)
	{
		printf("%c", 97);
	}
	else printf("INVALID");
}
