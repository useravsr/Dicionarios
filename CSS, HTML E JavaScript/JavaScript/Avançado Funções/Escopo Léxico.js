// Escopo léxico é a hierarquia do JS, aonde ele vai buscar as variaveis dentro do codigo.

const nome = "Arthur"; // global

function falaNome(){

    const nome = "Junior"; // retorno o nome que esta no escopo lexico
    console.log(nome);

}

function usaFalaNome(){

    const nome = "Cleber";
    return falaNome();

}

usaFalaNome()