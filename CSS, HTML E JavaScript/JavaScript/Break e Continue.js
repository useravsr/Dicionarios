const numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9];

    for (let numero of numeros){

        if (numero === 2){

            console.log("pulei o 2")
            continue; // Caso o numero seja 2, continue começará todo o for dnv, encerrando aqui e não exibindo o 2

        }

        if (numero === 7){

            console.log("Parei no 7")
            break;

        }
        
        console.log(numero);

    }