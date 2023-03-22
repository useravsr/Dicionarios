// IIFE -> Immediately invoked function expression 

(function(idade, peso, altura){

    const sobrenome = "Reis";

    function criaNome(nome){

        return nome + " " + sobrenome;

    }

    function falaNome(){

        console.log(criaNome("Arthur"));
        
    }

    falaNome();
    console.log(idade, peso, altura);

})(19, 60, 170); // As IIFE serão invocadas no mesmo momento em que são declaradas. 


