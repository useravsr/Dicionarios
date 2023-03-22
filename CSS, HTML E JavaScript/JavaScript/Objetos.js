//Arrays ficam ente [], Objetos ficam entre {}.

const pessoal = {

    nome:"Arthur",
    sobrenome:"Dos Reis",
    idade:19,

    fala(){

        console.log(`A minha idade atual é ${this.idade}`);

    },

    incrementarIdade() {

        this.idade++;
        console.log(`Minha idade no ano seguinte será ${this.idade}`);

    }
}
    const pessoal1 = {...pessoal} // Da mesma forma como funciona nas arrays, funciona nos objects

    pessoal.fala()
    pessoal.incrementarIdade()


/* Objeto junto com função, gerador de pessoas.

function geraPessoa(nome, sobrenome, idade){

    return{

        nome, sobrenome, idade

    }

}

const pessoal = geraPessoa("Arthur", "Dos Reis", 19);
const pessoal1 = geraPessoa("Daniel", "Alarcão", 20);
const pessoal2 = geraPessoa("João", "Pedro", 19);
const pessoal3 = geraPessoa("Kevin", "Oliveira", 19);
const pessoal4 = geraPessoa("Paulo", "Dantas", 19);

    console.log(pessoal.nome);
    console.log(pessoal1.sobrenome);
    console.log(pessoal2.nome);
    console.log(pessoal3.nome);
    console.log(pessoal4.sobrenome);

*/

/* Objeto de uma forma simplificada:

const pessoa = { 

    nome:"Arthur",
    sobrenome:"Dos Reis",
    idade:19

};

console.log(pessoa.nome, pessoa.sobrenome);
console.log(pessoa.idade);

*/

/*  Objeto junto com arrays:

    const elementos = [

    {tag: 'p', texto: "Frase 1"},
    {tag: "div", texto: "Frase 2"},
    {tag: "footer", texto: "Frase 3"},
    {tag: "section", texto: "Frase 4"},

];


console.log (elementos[1].tag);


*/