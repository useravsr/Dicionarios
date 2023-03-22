#include <stdio.h>
int main(){

        int n1,n2;
        double total,n3,n4;

        scanf("%i %i", &n1, &n2);
        

            switch (n1)
            {
            case 1:
                n3=4.00;
                break;
            case 2:
                n3=4.50;
                break;
            case 3:
                n3=5.00;
                break;
            case 4:
                n3=2.00;
                break;
            case 5:
                n3=1.50;
                break;
            
            default:
                printf("Produto nao cadastrado!");
                break;
            }


            switch (n2)
            {
            case 1:
                n4=4.00;
                break;
            case 2:
                n4=4.50;
                break;
            case 3:
                n4=5.00;
                break;
            case 4:
                n4=2.00;
                break;
            case 5:
                n4=1.50;
                break;
            
            default:
                printf("Produto nao cadastrado!");
                break;
            }

          total=n3+n4;
          printf("Total: R$ %f\n",total);  

}