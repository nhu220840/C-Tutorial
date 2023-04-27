#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	switch(n){
		case 1: case 2: case 3:
			printf("1");
			break;
		case 4: case 5: case 6: 
			printf("2");
			break;
		case 7: case 8: case 9:
			printf("3");
			break;
		case 10: case 11: case 12:
			printf("4");
			break;
	}
}
