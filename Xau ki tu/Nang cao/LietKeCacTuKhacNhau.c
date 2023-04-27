#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

char a[20000][50];
char b[20000][50];

int main(){
    char c[100001];
    gets(c);
    int n = 0;
    char *word = strtok(c, " ");
    while(word != NULL){
        int check = 1;
        for(int j = 0; j < n; j++){
            if(strcmp(word, a[j]) == 0){
                check = 0; break;
            }
        }
        if(check){
            strcpy(a[n], word);
            strcpy(b[n], word);
            n++;
        }
        word = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for(int i = 0; i < n; i++){
        printf("%s", a[i]);
        if(i != n - 1)
            printf(" ");
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%s", b[i]);
        if(i != n - 1)
            printf(" ");
    }
}
