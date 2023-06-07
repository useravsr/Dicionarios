#include<stdio.h>
#include<string.h>
int main(){

    char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    for ( i = 0; i < 5; i++) *p++; *p++;
    
    printf("%c", p);
    
}


