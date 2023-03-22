#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    char sub[100];
    //int contador = 0;

        scanf("%s", str);
        scanf("%s", sub);

    char *teste;

    teste = strstr(str, sub);


        printf("%s", teste);




    return 0;

}