// Função Construtora - Constroi Objetos
// Função Fabrica - Fabrica Objetos
// Funções construturas são escritas com a primeira letra em maiuscula, utilizando a palavra new

function Pessoa(nome, sobrenome){
    
    //Atributos ou Métodos privados. Só podem ser acessados dentro dessa função, não sendo permitido acessar os conteudo por meio de pontos.  
    const ID = 123456;
    const metodoInterno = function (){};

    // Atributos ou Métodos públicos 
    this.nome = nome;
    this.sobrenome = sobrenome;

    this.metodo = () => {

        console.log(this.nome + `: Sou um método!`);

    };

}

const p1 = new Pessoa('Arthur', 'Reis'); // A palavra new cria um objeto vazio, faz o this apontar para esse objeto vazio e retorna esse objeto para essa variavel. Basicamente é uma forma mais simples de se escrever um objeto.
const p2 = new Pessoa('Juninho', 'Oliveira');

p1.metodo();
