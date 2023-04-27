#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		int cnt = i;
		for(j=1; j<=n; j++){
			if(j<=n-i){
				printf("%d", cnt);
				cnt++;
			}
			else printf("%d", cnt);
		}
		printf("\n");
	}
}
