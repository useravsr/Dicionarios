function criaPessoa(nome, sobrenome, a, p){

    return{

        nome, 
        sobrenome,

        fala(assunto = "sobre nada"){                          

            return`${this.nome} está falando ${assunto}`; 

        },

        altura: a,
        peso: p,

        imc: function(){ // fala e imc, são duas funções escritas de maneiras diferentes, porem, funcionam da mesma forma.

               const indice = this.peso / (this.altura ** 2);
               return indice.toFixed(2);

        },

        // Getter
        get imc1(){ // imc passa a ser um atributo do objeto, "deixando" de ser uma função.

               const indice = this.peso / (this.altura ** 2);
               return indice.toFixed(2);

        },

        get nomeCompleto(){ // Função getter para retornar o nome completo de uma forma mais simples.

            return `${this.nome} ${this.sobrenome}`;

        },

        // Setter 
        set nomeCompleto(valor){ // Essa função pega um nome composto como "Tamarindo Da Silva" e divide ele em nome e sobrenome.

            valor = valor.split(" ");
            this.nome = valor.shift();
            this.sobrenome = valor.join(" ");

        }

    };

}

const p1 = criaPessoa("Arthur", "Reis", 1.7, 60);
console.log(p1.imc());

const p2 = criaPessoa("Juninho", "Bento", 1.9, 150);
console.log(p2.imc1); // Como imc1 passou a ser um atributo, não é mais necessario declarar como se fosse uma função 
console.log(p2.fala("sobre pepino")); // "this" se refere a pessoa que está chamando a função, nesse casso sendo p2, então quando executarmos é mesma coisa que escrever "p2.nome".
console.log(p2.nomeCompleto);

p1.nomeCompleto = ("Tamarindo Da Silva");
console.log(p1.sobrenome);

