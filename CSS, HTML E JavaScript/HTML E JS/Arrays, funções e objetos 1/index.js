function infinito(){

    const form = document.querySelector("#form");
    const pessoa = [];

    function rebeceForms(evento){

        evento.preventDefault();
        
        const nome = form.querySelector("#nome");
        const sobrenome = form.querySelector("#sobrenome");
        const idade = form.querySelector("#idade");
        const altura = form.querySelector("#altura");
        
        pessoa.push({
            
            nome:nome.value,
            sobrenome:sobrenome.value,
            idade:idade.value,
            altura:altura.value
            
        })
        console.log(pessoa)

        document.querySelector("#resultado").innerHTML += (`${nome.value} ${sobrenome.value} ${idade.value} ${altura.value} <br>`)
    }

    
    form.addEventListener("submit", rebeceForms);

}

infinito()