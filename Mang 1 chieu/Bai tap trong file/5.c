#include <stdio.h>
int check(int a[], int n){
	int c25=0, c50=0;
	int i;
	for(i=0; i<n; i++){
		if(a[i]==25) c25++;
		else if(a[i]==50){
			if(c25 == 0) return 0;
			else{
				c25--;
				c50++;
			} 
		}
		else{
			if(c25==0 || c25*25+c50*50<75) return 0;
			if(c25 != 0 && c50 != 0){
				c50--;
				c25--;
			}
			if(c50 == 0) c25-=3;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	if(check(a, n) == 1) printf("YES");
	else printf("NO");
}
