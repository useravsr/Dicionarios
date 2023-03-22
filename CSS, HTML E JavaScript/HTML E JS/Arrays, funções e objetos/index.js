function reinicio(){

    const resultado = document.querySelector(".resultado");
    const form = document.querySelector('.form');
    

        function recebeEventoForm(evento){
        evento.preventDefault();

            const nome = document.querySelector('.nome');
            const sobrenome = document.querySelector('.sobrenome');
            const peso = document.querySelector('.peso');
            const altura = document.querySelector('.altura');
            const pessoas = [nome.value, sobrenome.value, peso.value, altura.value];
            
            resultado.innerHTML += `${nome.value} ${sobrenome.value} ${peso.value} ${altura.value} <br>`;

            console.log(pessoas)
        }

            form.addEventListener('submit', recebeEventoForm);
            

        };

        reinicio();
        

