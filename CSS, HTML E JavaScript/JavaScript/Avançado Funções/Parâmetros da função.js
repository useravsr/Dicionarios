// Funções definidas com a palavra function, possuem por padrão dentro delas a variável "arguments". Ela armazena tudo que for passado como parâmetro, em forma de array.
function funcao1(){

    let total = 0;

        for (argumento of arguments){

            console.log(argumento);
            total += argumento;
        }

    console.log(`\nTotal:${total}`);

}

funcao1(1, 2, 3, 4, 5, 6, 7, 8);

// Valores padrões ---------------------------------------

function funcao2(a, b = 2, c = 4){ // Forma mais atual de se adicionar um valor padrão para B, descartando a maneira descrita a baixo.

    // b = b || 2; // Uma maneira desatualizada de passar um valor padrão para B, será o valor passado pela variável ou 0.

    console.log(a + b + c);

};

funcao2(2, undefined, 10); // Única maneira de pular um valor é utilizando undefined ou false.

// Atribuição via desestruturação -------------------------

function funcao3({nome, sobrenome, idade}){

    console.log(nome, sobrenome, idade);

}

let obj = {
    
    nome: "Arthur",
    sobrenome: "Dos Reis", 
    idade: 19

};

funcao3(obj)

// Arrays como parametros --------------------------------

function funcao4([valor1, valor2, valor3]){

    console.log(valor1, valor2, valor3);

}

// funcao4(["Arthur", "Cleber", "Robson"]); Pode ser enviado os valores dessa forma, ou atribuidos a uma variável e executados. Ex:

const array = ["Arthur", "Cleber", "Robson"];

funcao4(array);

// Exemplo de uma função calculadora.

function conta(operador, acumulador, ...numeros){

    for(let numero of numeros){

        if (operador === "+") acumulador += numero;
        if (operador === "-") acumulador -= numero;
        if (operador === "*") acumulador *= numero;
        if (operador === "/") acumulador /= numero;
        

    }
    console.log (acumulador);

}

conta("/", 0, 20, 30, 40, 50);


