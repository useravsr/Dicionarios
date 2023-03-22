const pessoa = {

    nome: 'Luiz',
    sobrenome: 'Miranda',
    idade: 20,
    endereco:{
        rua: "SabugoLandia",
        numero: 69
    }

}

const {nome: fulano = "", sobrenome, idade} = pessoa; // Um exemplo de como aletar o nome da variavel dentro do objeto, mudando de nome para fulando

const { endereco: {rua, numero}, endereco } = pessoa

console.log(rua, numero, endereco)