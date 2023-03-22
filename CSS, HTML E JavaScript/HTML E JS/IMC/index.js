function Inicio(){

    const form = document.querySelector(".form");
    const resultado = document.querySelector("#resultado");
    const pesoString = form.querySelector("#peso");
    const alturaString = form.querySelector("#altura");

    function padrao(evento){
        evento.preventDefault();

        const peso = Number(pesoString.value);
        const altura = Number(alturaString.value);
        const imc = peso/(altura/100*altura/100);

        console.log(pesoString.value, alturaString.value, altura, peso, imc);

        function valorIMC (IMC){

            const nivel = ['Abaixo do peso!', 'Peso normal!', 'Sobrepeso!', 'Obesidade grau I!', 'Obesidade grau II!', 'Obesidade grau III!', 'Altura Inválida!', 'Peso Inválido!', 'Peso e Altura Inválidos!'];

            if (!peso && !altura) return nivel[8];  
            if (!peso) return nivel[7]; 
            if (!altura) return nivel[6];
            if (IMC >= 39.9) return nivel[5];
            if (IMC >= 34.9) return nivel[4];
            if (IMC >= 29.9) return nivel[3];
            if (IMC >= 24.9) return nivel[2];
            if (IMC >= 18.5) return nivel[1];
            if (IMC < 18.5) return nivel[0];

        };

        resultado.innerHTML = (`${valorIMC(imc)} - IMC: ${imc.toFixed(1)}`);

    }

    form.addEventListener('submit', padrao);

}
Inicio()

