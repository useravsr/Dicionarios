const liga = document.querySelector(".caixa");
const div = document.createElement("div")
const elementos = [

    {tag: 'p', texto: "Frase 1"},
    {tag: "div", texto: "Frase 2"},
    {tag: "footer", texto: "Frase 3"},
    {tag: "section", texto: "Frase 4"},

];

for(let i = 0; i < elementos.length ; i++){

    const {tag, texto} = elementos[i] 

        let tagCriada = document.createElement(tag);
        tagCriada.innerText = texto;
        div.appendChild(tagCriada);
        
}

div.classList.add("margem")
liga.appendChild(div); 