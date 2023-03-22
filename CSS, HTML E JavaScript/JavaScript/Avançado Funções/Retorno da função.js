// Retorna um valor
// Termina a função

function soma(a, b){

    return a + b;

}
console.log(soma(1,2))

// ----------------------------------- Função inutil, não retorna nada, apenas exibe no console.

function soma2(a, b){

    console.log(a + b);

}

soma2(5, 2);

// ----------------------------------- Exemplos de retorno de função com objetos

function criaPessoa(nome, sobrenome){

    return{nome:nome, sobrenome:sobrenome};

}

const nome = criaPessoa("arthur", "reis");
console.log(nome.nome)
const nome2 = {

    nome:"João",
    sobrenome:"Cleber"

};

const nome3 = criaPessoa(nome2.nome, nome2.sobrenome);
console.log(nome3.sobrenome)

//--------------------------------------- 2 exemplos abaixo são funções dentro de funções

function falaFrase(comeco){

    function falaResto(resto){

        return comeco + " " + resto;
        
    }

    return falaResto;
}

const comeco = falaFrase("Olá");
const fraseInteira = comeco("mundo!");

console.log(fraseInteira);

// ----------------------------------

function multiplicador(mult){

    function multiplicar(n){

        return n * mult

    }

    return multiplicar;

}

const duplica = multiplicador(2)
const triplica = multiplicador(3)
const quadruplica = multiplicador(4)

console.log(duplica(2));
console.log(triplica(2));
console.log(quadruplica(2));