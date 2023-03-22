let segundos = 1;
let data;

function teta(segundos){

        let date = new Date(segundos*1000);
        return date.toLocaleTimeString('pt-br', {timeZone:"UTC"}); 

    };

const intervalo = setInterval(function(){console.log(teta(segundos++))},1000)


const parar = setTimeout(

    function(){

        clearInterval(intervalo);

    }, 5000


);