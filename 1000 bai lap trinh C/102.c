#include <stdio.h>
int namnhuan(int y){
	if(y%400 == 0 || (y%4 == 0 && y%100 != 0)) return 1;
	return 0;
}

int ngaytrongthang(int m, int y){
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 2:
			if(namnhuan(y) == 1) return 29;
			else return 28;
		case 4: case 6: case 9: case 11:
			return 30;
	}
}

void ngaytieptheo(int d, int m, int y){
	int nd = d, nm = m, ny = y;
	if(y>0 && m>0 && m<13 && d>0 && d<=(ngaytrongthang(m,y))){
		nd = d+1;
		if(m == 12 && d == ngaytrongthang(m,y)){
			nd = 1;
			nm = 1;
			ny = y+1;
		}
		else if(m != 12 && d == ngaytrongthang(m,y)){
			nd = 1;
			nm = m+1;
		}
		else if(m == 2){
			if(namnhuan(y) == 1){
				if(d == 29){
					nd = 1;
					nm = m+1;
				}
			}
			else{
				if(d == 28){
					nd = 1;
					nm = m+1;
				}
			}
		}
	}
	printf("%d %d %d", nd, nm, ny);
}

int main(){
	int d, m, y;
	scanf("%d %d %d", &d, &m, &y);
	ngaytieptheo(d,m,y);
}
