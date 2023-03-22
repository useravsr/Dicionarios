function relogio(){

    let data = new Date();

    return data.toLocaleString("pt-br",{

        timeStyle: "medium"

    })

}

const interval = function (){

     console.log(relogio())
    
    };

const timer = setInterval(interval, 1000);
setTimeout( () => clearInterval(timer), 4500);
setTimeout( () => console.log ("Olá, Mundo!"), 5000);


