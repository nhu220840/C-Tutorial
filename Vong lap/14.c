#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int chan = 0;
	int le = 0;
	while(n != 0){
		if(n%10 == 0 || n%10 == 2 || n%10 ==4 || n%10 ==6 || n%10 ==8){
			chan += n%10; 
		}
		else{
			le += n%10;
		}
		n/=10;
	}
	printf("%d\n%d", chan, le);
}
