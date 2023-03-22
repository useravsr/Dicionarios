// Escreva uma função que recebe 2 números e 
// retorne o maior deles

const max = 100;
const min = 1;

    function rand1(min, max){

        const rand1 = Math.random() * (max - min) + min;
        return rand1; 

    }

    function rand2(min, max){

        const rand2 = Math.random() * (max - min) + min;
        return rand2; 

    }

const redondo1 = Math.round(rand1(max, min));
const redondo2 = Math.round(rand2(max, min));

    console.log(`Número 1 = ${redondo1}`);
    console.log(`Número 2 = ${redondo2}`);

    function maior(rdnd1, rdnd2){

        if(rdnd1 > rdnd2) return ("O maior número é o 1º!");
        if(rdnd2 > rdnd1) return ("O maior número é o 2º!");
        if(rdnd1 === rdnd2) return ("Os números são iguais!");

    }

const resultado = maior(redondo1, redondo2);

    console.log(resultado)