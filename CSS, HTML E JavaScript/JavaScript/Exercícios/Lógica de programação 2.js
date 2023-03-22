// Escreva uma função chamada ePaisagem que 
// que recebe dois argumentos, largura e altura 
// de uma imagem (number).
// Retorne true se a imagem estiver no modo
// paisagem.

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

const ePaisagem = (alt, larg) => (alt<larg); //Função com if else da forma mais simplificada possivel.

    console.log (ePaisagem(redondo1,redondo2));