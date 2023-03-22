//For in - Retorna o índice ou chave (string, array ou objetos);

const pessoa = {

    nome: "Juninho",
    sobrenome: "Pinto",
    idade:67

};

for (let chaves in pessoa){

    console.log(chaves, pessoa[chaves]);

}




// Exemplo com Array;

const frutas = ["Tomate", "Abacate", "Kiwi", "Pera", "Bergamota"];

    for (let i in frutas){

        console.log(frutas[i]);

    }