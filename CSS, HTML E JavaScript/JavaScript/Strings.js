/*
        
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

*/
        
const nomeEu = "Arthur Dos Reis";

       console.log(`Seu nome é: ${nomeEu}`);
       console.log(`Seu nome tem  ${nomeEu.length} letras`);
       console.log(`A segunda letra do seu nome é: ${nomeEu.charAt(1)} `);
       console.log(`Qual o primeiro índice da letra R no seu nome? ${nomeEu.indexOf('r')} `);
       console.log(`Qual o último índice da letra R no seu nome? ${nomeEu.lastIndexOf('r')} `);
       console.log(`As últimas 3 letras do seu nome são: ${nomeEu.slice(-3)} `);
       console.log(`As palavras do seu nome são: ${nomeEu.split(" ")} `);
       console.log(`Seu nome com letras maiúsculas: ${nomeEu.toUpperCase()} `);
       console.log(`Seu nome com letras minúsculas: ${nomeEu.toLowerCase()} `);
