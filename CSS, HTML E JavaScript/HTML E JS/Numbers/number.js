const num1 = Number(prompt("Digite um número:"));
const titulo = document.getElementById("numeroTitulo")
const div = document.getElementById("conteudo"); 

    
    numeroTitulo.innerHTML = num1;
    conteudo.innerHTML = `Raiz quadrada: ${num1 ** 0.5} <p />`;
    conteudo.innerHTML += `${num1} é inteiro? : ${Number.isInteger(num1)} <p />`;
    conteudo.innerHTML += `É NaN? : ${Number.isNaN(num1)} <p />`;
    conteudo.innerHTML += `Arredondando para baixo: ${Math.floor(num1)} <p />`;
    conteudo.innerHTML += `Arredondando para cima: ${Math.ceil(num1)} <p />`;
    conteudo.innerHTML += `Com duas casa decimais: ${num1.toFixed(2)} <p />`;


    /* 

    Os 2 exemplos fazem a mesma coisa, tanto esse aqui, quanto o de cima.

    document.getElementById("conteudo").innerHTML = `Raiz quadrada: ${num1 ** 0.5} <p />`;
    document.getElementById("conteudo").innerHTML += `${num1} é inteiro? : ${Number.isInteger(num1)} <p />`;
    document.getElementById("conteudo").innerHTML += `É NaN? : ${Number.isNaN(num1)} <p />`;
    document.getElementById("conteudo").innerHTML += `Arredondando para baixo: ${Math.floor(num1)} <p />`;
    document.getElementById("conteudo").innerHTML += `Arredondando para cima: ${Math.ceil(num1)} <p />`;
    document.getElementById("conteudo").innerHTML += `Com duas casa decimais: ${num1.toFixed(2)} <p />`;
    
    */
    