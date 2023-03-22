// Se por algum motivo utlizar console.log para executar a função e o resultado for undefined, console.log em alguns casos não é necessario.
// Declaração de função (Function Hoisting)

falaOi();
function falaOi(){

    console.log("Oi");

};

// First-Class objects (Objetos de primeira classe)
// Function expression

const falaOi2 = function(){ //Função dentro de variáveis.

    console.log("Oi2");

};

falaOi2();

function teste(tomate){ // Função para receber uma função e executa-la.

    tomate();

}

teste(falaOi2) 

// Arrow Function 

const falaOi3 = () => console.log("Oi3");

falaOi3()

// Dentro de um objeto

const falaOi4 = {

    falar: function(){

        console.log("Oi4")

    }

}

falaOi4.falar()

// 

