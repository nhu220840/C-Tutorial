#include <stdio.h>
void mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	int n, a[5]; 
	scanf("%d", &n);
	int chan = 0;
	int le = 0;
	mang(a, n);
	int i;
	for(i=0; i<n; i++){
		if(a[i] % 2==0) chan++;
		else le++;
	}
	printf("%d %d", chan, le);
	
}
