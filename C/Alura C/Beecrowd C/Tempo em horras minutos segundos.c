#include <stdio.h>
int main(){

        int tempo,horas=0,minutos1,minutos=0,segundos=0;

        scanf("%i", &tempo);

                if (tempo<=60){       

                        segundos=tempo;
                        printf("%i:%i:%i\n",horas,minutos,segundos);

                } else  
                         if (tempo>60 && tempo<3600){

                                minutos=tempo/60;
                                segundos=tempo-(minutos*60);
                                printf("%i:%i:%i\n",horas,minutos,segundos);

                           } else
                                  if (tempo>=3600) {

                                        horas=tempo/3600;
                                        minutos=(tempo-(horas*3600))/60;
                                        minutos1=tempo/60;
                                        segundos=tempo-(minutos1*60);
                                        printf("%i:%i:%i\n",horas,minutos,segundos);

                                  }      


        return 0;
}