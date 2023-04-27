#include <stdio.h>
int main(){
	int t, n; scanf("%d %d", &t, &n);
	switch(t){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("30\n");
			break;
		case 2:
			if(n%400 == 0 || (n%4 == 0 && n%100 != 0)) printf("29\n");
			else printf("28\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30\n");
			break;
	}
}
