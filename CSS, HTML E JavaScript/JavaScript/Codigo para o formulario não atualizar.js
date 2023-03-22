function reinicio(){

    const form = document.querySelector('.form');

     function recebeEventoForm(evento){
        evento.preventDefault();
     }

     form.addEventListener('submit', recebeEventoForm);

};

reinicio()

function reinicio(){

    const form = document.querySelector('.form');

    form.onsubmit = function (evento){

        evento.preventDefault();

        };

};

reinicio()            
             