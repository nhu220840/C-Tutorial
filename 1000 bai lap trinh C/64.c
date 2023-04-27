#include <stdio.h>
int main(){
	int a, b; scanf("%d %d", &a, &b);
	if(a==0){
		if(b==0) printf("vo so nghiem");
		else printf("vo nghiem");
	}
	else{
		if(b==0) printf("x=0");
		else printf("x=%f",-1.0*b/a);
	}
}
