// Codigo feito com função construtora


function criaCalculadora(){

    const display = document.querySelector('.display');
    
    this.pressionaEnter = () =>{

        display.addEventListener('keypress', (e)=>{

            if(e.keyCode === 13){ // 13 codigo para a tecla Enter

                this.resultadoDisplay(); 
            }

        }); //Como visto em baixo, utilizar arrow function, exclui a necessidade de se utilizar "bind(this)" no final da function.

    };

    this.resultadoDisplay = () =>{

        let conta = display.value;

        try{

            conta = eval(conta) // Eval é uma função que tenta computar uma string. Porém pode ser uma brexa na segurança, já que tudo que é passada pra ela, é executada.
            
            if(!conta){

                alert("Conta Inválida!");
                return;

            }

            display.value = String(conta);

        } catch (e){

            alert("Conta Inválida!");
            return;
            
        }
    };

    this.apagaUm = () =>{

        display.value = display.value.slice(0,-1);

    };

    this.clearDisplay = () =>{

        display.value = '';

    };

    this.btnParaDisplay = (valor) =>{

        display.value += valor;
        display.focus()

    };
    
    this.clickBotoes = () =>{

        document.addEventListener('click', function(e){

            const el = e.target;

            if(el.classList.contains('btn-num')) this.btnParaDisplay(el.innerText);
            if(el.classList.contains('btn-clear')) this.clearDisplay();
            if(el.classList.contains('btn-del')) this.apagaUm();
            if(el.classList.contains('btn-eq')) this.resultadoDisplay();
        
        }. bind(this)) // Nesse ponto estamos informando com a função bind que this se refere a calculadora e não a document. Porem, se utilizar arrow functions, o this não mudará, sendo sempre quem chamou a função
    };

    this.inicia = () =>{

        this.clickBotoes();
        this.pressionaEnter();
        this.pressionaBackspace();

    };
    

}

const calculadora = new criaCalculadora();
calculadora.inicia()