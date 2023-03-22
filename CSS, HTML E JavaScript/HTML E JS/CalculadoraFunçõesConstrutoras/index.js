// Codigo feito com função fabrica

function criaCalculadora(){

    return{

        display: document.querySelector('.display'),
        
        pressionaEnter(){

            this.display.addEventListener('keypress', (e)=>{

                if(e.keyCode === 13){ // 13 codigo para a tecla Enter

                    this.resultadoDisplay(); 
                }

            }); //Como visto em baixo, utilizar arrow function, exclui a necessidade de se utilizar "bind(this)" no final da function.

        },

        resultadoDisplay(){

            let conta = this.display.value;

            try{

                conta = eval(conta) // Eval é uma função que tenta computar uma string. Porém pode ser uma brexa na segurança, já que tudo que é passada pra ela, é executada.
                
                if(!conta){

                    alert("Conta Inválida!");
                    return;

                }

                this.display.value = String(conta);

            } catch (e){

                alert("Conta Inválida!");
                return;
                
            }
        },

        apagaUm(){

            this.display.value = this.display.value.slice(0,-1);

        },

        clearDisplay(){

            this.display.value = '';

        },

        btnParaDisplay(valor){

            this.display.value += valor;
            display.focus()

        },
        
        clickBotoes(){

            document.addEventListener('click', function(e){

                const el = e.target;

                if(el.classList.contains('btn-num')) this.btnParaDisplay(el.innerText);
                if(el.classList.contains('btn-clear')) this.clearDisplay();
                if(el.classList.contains('btn-del')) this.apagaUm();
                if(el.classList.contains('btn-eq')) this.resultadoDisplay();
            
            }. bind(this)) // Nesse ponto estamos informando com a função bind que this se refere a calculadora e não a document. Porem, se utilizar arrow functions, o this não mudará, sendo sempre quem chamou a função
        },

        inicia(){

            this.clickBotoes();
            this.pressionaEnter();
            this.pressionaBackspace();

        },
        
    };
}

const calculadora = criaCalculadora();
calculadora.inicia()