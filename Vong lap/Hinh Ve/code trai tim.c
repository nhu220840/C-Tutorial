#include <stdio.h>
int main(){
	int mid=20,y1=5,y2=35,t1=-1,t2=1;
	int y3=12,y4=28;
	int i;
	for(i=1;i<=y1;i++) printf(" ");	printf("*");
	for(i=y1+1;i<=y3-2;i++) printf("*");
	for(i=y3+2;i<=y4+2;i++) printf(" "); printf("*");
	for(i=y4;i<=y2-3;i++) printf("*"); printf("\n");
	while(1){
		int i;
		for(i=1;i<=y1-1;i++) printf(" "); printf("*");
		if(y3>y4){
			int i;
			for(i=y1+1;i<=y2-1;i++) printf(" "); printf("*");
		}
		else{
			if(y1<y3){
				int i;
				for(i=y1+1;i<=y3-1;i++) printf(" "); printf("*");
			}
			if(y3<y4){
				int i;
				for(i=y3+1;i<=y4-1;i++) printf(" "); printf("*");
			}			
			if(y4<y2){
				int i;
				for(i=y4+1;i<=y2-1;i++) printf(" "); printf("*");
			}
			y3+=1;y4-=1;
		}	
		printf("\n");
		y1+=t1;y2+=t2;
		if(y1==0){
			t1=1;t2=-1;
			y1+=t1;y2+=t2;
		}
		if(y1==y2){
			int i;
			for(i=1;i<=y1-1;i++) printf(" "); printf("*");
			break;	
		}
	}
	return 0;
}
