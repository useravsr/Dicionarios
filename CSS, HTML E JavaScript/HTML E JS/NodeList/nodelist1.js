const paragrafo = document.querySelector(".paragrafos");
const ps = paragrafo.querySelectorAll("p"); //Caso fosse utliziado querySelector sem All só seria selecionado o primeiro P.

const estiloBody = getComputedStyle(document.body);
const backgroundColorBody = estiloBody.backgroundColor;

    for (let p of ps){

        p.style.backgroundColor = backgroundColorBody
        p.style.color = "white"

    }

