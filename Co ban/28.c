#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		if(a==b && b==c){
			printf("1");
		}
		else if(a==b || b==c || a==c){
			printf("2");
		}
		else if((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(a,2)+pow(c,2)==pow(b,2)) || (pow(c,2)+pow(b,2)==pow(a,2))){
			printf("3");
		}
		else if((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(a,2)+pow(c,2)==pow(b,2)) || (pow(c,2)+pow(b,2)==pow(a,2)) && (a==b || b==c || a==c)){
			printf("4");
		}
		else{
			printf("5");
		}
	}
	else{
		printf("INVALID");
	}
}
