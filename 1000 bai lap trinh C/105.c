#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	if(n<10 || n>99) printf("Nhap lai");
	else{
		int a = n%10;
		int b = n/10;
		switch(b){
			case 1: printf("Muoi "); break;
			case 2: printf("Hai Muoi "); break;
			case 3: printf("Ba Muoi "); break;
			case 4: printf("Bon Muoi "); break;
			case 5: printf("Nam Muoi "); break;
			case 6: printf("Sau Muoi "); break;
			case 7: printf("Bay Muoi "); break;
			case 8: printf("Tam Muoi "); break;
			case 9: printf("Chin Muoi "); break;
		}
		switch(a){
			case 1: printf("Mot"); break;
			case 2: printf("Hai"); break;
			case 3: printf("Ba"); break;
			case 4: printf("Bon"); break;
			case 5: printf("Lam"); break;
			case 6: printf("Sau"); break;
			case 7: printf("Bay"); break;
			case 8: printf("Tam"); break;
			case 9: printf("Chin"); break;
		}
	}
}
