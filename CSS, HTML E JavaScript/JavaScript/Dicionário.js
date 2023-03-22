//Se utiliza camelCase para variáveis com nomes compostos. Ex: nomeCompletoDoCliente.
//Tipos de dados primitivos (imutáveis): Boolean, Null, Undefined, Number, String, Symbol, BigInt - Valores Copiados.
//Tipos de dados referência (mutável): Array, Object, Function - Passados por refêrencia. Apontam para o mesmo lugar na memória.
// Iteráveis são grupos de valores que podem ser percorridos um a um (arrays, strings)

/* 
    Operadores aritméticos, comparação e termos do JS:

        + = Adição / Concatenação
        - = Subtração
        / = Divisão
        * = Multiplicação
        ** = Potenciação
        % = Resto de divisão

        > - Maior que
        >= - Maior  igual a
        < - Menor que
        <= - Menor  igual a
        == - Igualdade - NÃO UTLIZAR!
        === - Igual, somente igual a (valor e tipo) 
        != - Diferente de NÃO UTLIZAR!
        !== - Diferente estrito (valor e tipo)

        && - E 
        || - OU
        ! - NÃO

        ++ = Incremento
        -- = Decremento 

*/

/* 
    Valores que retornam um resultado falso:

        undefined
        null
        NaN
        0
        "" (string vazia)
        false
*/

/* 
    Strings:

        ${Variavel} - Para colocar variaveis dentro de uma string se utilizada a expressão ${Variavel}, sendo necessario toda a string estar dentro de crases ``. 
        \"Texto\" - Para colocar aspas duplas dentro de aspas duplas.
        \\ - Para colocar barra invertida em saidas.

        string[Número]) / (string.charAt(Número) - Imprime na tela a letra indicada pelo número.
        string.concat("Conteudo") - Função para concatenar o conteudo dentro dos parenteses.
        string.indexOf("Palavra", "número") - Busca uma palavra dentro do texto e informa sua posição. A virgula com o número indica a posição na string que a busca vai começar.
        string.lastIndexOf("Palavra", "número") - Faz a mesma coisa que indexof, porem começa de trás para frente.
        string.replace("palavra1", "palavra2") - Substitui a palavra1 na string pela palavra.
        string.length - Informa o tamanho da string.
        string.slice(Inicio, Fim) - Recorta um pedaço da string
        string.split("") - Divide a string. Sem espaço entra as aspas, a função dividirá os caracteres. Com espaço a função divide as palavras. 
        string.toUpperCase() - Imprime toda a string em letra maiuscula. Se tratando de uma função é necessario o uso dos parenteses.
        string.toLowerCase() - Imprime toda a string em letra minuscula. Se tratando de uma função é necessario o uso dos parenteses.

        Exemplos: 

         `Seu nome é: ${nomeEu}`;
         `Seu nome tem  ${nomeEu.length} letras`;
         `A segunda letra do seu nome é: ${nomeEu.charAt(1)} `;
         `Qual o primeiro índice da letra R no seu nome? ${nomeEu.indexOf('r')} `;
         `Qual o último índice da letra R no seu nome? ${nomeEu.lastIndexOf('r')} `;
         `As últimas 3 letras do seu nome são: ${nomeEu.slice(-3)} `;
         `As palavras do seu nome são: ${nomeEu.split(" ")} `;
         `Seu nome com letras maiúsculas: ${nomeEu.toUpperCase()} `;
         `Seu nome com letras minúsculas: ${nomeEu.toLowerCase()} `;

*/

/* 
    Numbers:

        ! Contas com valores abaixo de zero possuem imprecisões, sendo resolvidas com  "Variável" = Number("Variável".toFixed(2))

        Variável A ?= Variável B  - Uma forma de fazer operações substituindo a ? pelo sinal desejado. num1 += num2 / num1 = num1 + num2
        NaN - Not a Number

        Number(Variável) - Converte o valor para um number.
        ParseInt - Converte strings inteiras para number.
        ParseFloat - Converte strings decimais para number.

        Variável.toString(None/10) - Transforma o número em uma string na base 10. 
        Variável.toString(2) - Converte o número para binario.
        Variável.toString(16) - Converte o número para hexadecimal.
        Variável.toString(36) - Converte o número para octal.
        Variável.toFixed() - Função para arredondar números, o número em parenteses será a quantidade de casas depois da virgula. 

        Number.isInteger(Variável) - Retorna um valor boleano dizendo se a variável é ou não um valor inteiro.
        Number.isNaN(Variável) - Retorna um valor boleano informando se o a variável é ou nao um número.

        Math.floor(Variável); - Arredondou o número para baixo.
        Math.ceil(Variável); - Arredondou o número para cima.
        Math.round(Variável); - Arrendonda para o mais próximo.
        Math.max(1, 2, 3, 4); - Informa o maior número de uma sequencia.
        Math.min(1, 2, 3, 4); - Informa o menor número de uma sequencia.
        Math.random(); - Geral um número aleatorio entre 0 e 1. 
        Math.PI; - O valor de PI.
        Math.pow(base, potencia); - Eleva o número.
        
*/
 
    let teste = true; 
    const nomeEu = "Arthur";
    let idade = 19;
    const pi = 3.14159265359;

    const cidadeTesteAbacate = 10;

        console.log(idade.toString(3));

        console.log(`Olá, meu nome é ${nomeEu} e tenho ${idade} anos de idade.\n`); //Para colocar variaveis dentro de uma string se utilizada a expressão ${Nome da Variavel}, sendo necessario toda a string estar dentro de crases ``. 

        console.log ("Hello \"World!\""); // Para colocar "" dentro de "", se utiliza a \ juntamente com as "". Ex: \" Texto \" .

        console.log(typeof teste); //Typeof fala o tipo da variavel.
