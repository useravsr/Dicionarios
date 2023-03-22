const nomeEu=prompt("Digite seu nome:");

    document.body.innerHTML += `Seu nome é: <strong> ${nomeEu} <strong/> <br />`;
    document.body.innerHTML += `Seu nome tem <strong> ${nomeEu.length} <strong/> letras <br />`;
    document.body.innerHTML += `A segunda letra do seu nome é: <strong> ${nomeEu.charAt(1)} <strong/> <br />`;
    document.body.innerHTML += `Qual o primeiro índice da letra R no seu nome? <strong> ${nomeEu.indexOf('r')} <strong/> <br />`;
    document.body.innerHTML += `Qual o último índice da letra R no seu nome? <strong> ${nomeEu.lastIndexOf('r')} <strong/> <br />`;
    document.body.innerHTML += `As últimas 3 letras do seu nome são: <strong> ${nomeEu.slice(-3)} <strong/> <br />`;
    document.body.innerHTML += `As palavras do seu nome são: <strong> ${nomeEu.split(" ")} <strong/> <br />`;
    document.body.innerHTML += `Seu nome com letras maiúsculas: <strong> ${nomeEu.toUpperCase()} <strong/> <br />`;
    document.body.innerHTML += `Seu nome com letras minúsculas: <strong> ${nomeEu.toLowerCase()} <strong/> <br />`;


