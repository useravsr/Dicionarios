const relogio = document.querySelector(".relogio");
const inicar = document.querySelector(".iniciar");
const pausar = document.querySelector(".pausar")
const zerar = document.querySelector(".zerar")
let segundos = 0;
let timer;

let criasegundos = segundos =>{

        let data = new Date(segundos*1000);
        return data.toLocaleTimeString('pt-br', { timeZone:"GMT" });

    };

  
    inicar.addEventListener("click", function(event){

        clearInterval(timer)
        relogio.style.color = "black"
        timer = setInterval(function(){
            
            relogio.innerHTML = criasegundos(segundos++)
        
        }, 1000);

    });

    pausar.addEventListener("click", function(event){

        relogio.style.color = "red"
        clearInterval(timer);

    });

    zerar.addEventListener("click",  function(event){

        segundos = 0;
        relogio.style.color = "black"
        relogio.innerHTML = "00:00:00"
        setTimeout(function(){clearInterval(timer)});

    });
