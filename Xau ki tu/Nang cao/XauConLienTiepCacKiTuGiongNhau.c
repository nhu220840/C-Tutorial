#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[100005];
	scanf("%s", c);
	int cnt = 1, res = 1;
	char kq = c[0];
	for(int i = 1; i <= strlen(c); i++){
		if(c[i] == c[i - 1]){
			cnt++;
		}
		else{
			if(cnt > res){
				res = cnt;
				kq = c[i - 1];
			}
			else if(cnt == res){
				if(c[i - 1] > kq){
					kq = c[i - 1];
				}
			}
			cnt = 1;
		}
	}
	for(int i = 0; i < res; i++){
		printf("%c", kq);
	}
}
