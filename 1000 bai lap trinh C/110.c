#include <stdio.h>
int main(){
	int i, j, k;
	for(i=0; i<=200; i++){
		for(j=0; j<=100; j++){
			for(k=0; k<=40; k++){
				if(1000*i + 2000*j + 5000*k == 200000){
					printf("%d-2000 / %d-1000 / %d-5000\n", i, j, k);
				} 
			}
		}
	}
}
