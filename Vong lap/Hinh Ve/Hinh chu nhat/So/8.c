#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		int cnt = i;
		for(j=1; j<=n; j++){
			if(j<i){
				printf("%d ", cnt);
				cnt--;
			} 
			else{
				printf("%d ", cnt); 
				cnt++;
			}
		}
		printf("\n");
	}
}
