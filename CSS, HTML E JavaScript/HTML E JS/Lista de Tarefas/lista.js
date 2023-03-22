const caixaTexto = document.querySelector("#texto");
const botao = document.querySelector(".botaoTexto");
const tarefas = document.querySelector(".tarefas");

    function adicionar(texto){ // Função para criar as listas no HTML

        const li = document.createElement("li");
        li.innerText = texto;
        tarefas.appendChild(li); 
        limpaInput();
        criarBotao(li);
        salvarTarefa();

    };

    botao.addEventListener("click", function(){ // Função para quando o botão for presionado executar a função de adicionar a lista no HTML
        
        if(!caixaTexto.value) return;
        adicionar(caixaTexto.value);

    });

    
    caixaTexto.addEventListener("keypress", function(event){ //Função para quando o ENTER enviar o valor, sendo 13 o código da tecla ENTER.
        
        if (event.keyCode === 13){
            if (!caixaTexto.value) return;
            adicionar(caixaTexto.value);
            
        }
        
    });

    function limpaInput(){ // Função para limpar e colocar o foco do mouse dentro da caixa pronto para digitar novamente.

        caixaTexto.value = "";
        caixaTexto.focus(); 

    };

    function criarBotao(li){ // Função para criar um botão apagar ao lado da lista

        li.innerText += " ";
        const botaoApagar = document.createElement("button");
        botaoApagar.innerText = "Apagar"
        botaoApagar.setAttribute('class','apagar');
        li.appendChild(botaoApagar);

    };

    document.addEventListener("click", function(event){ // Função para dar função ao botão apagar.

        const el = event.target;
        if (el.classList.contains("apagar")){

            el.parentElement.remove();
            salvarTarefa(); // Apos remover uma tarefa, ela será atualizada no banco de dados do navegador 

        }

    });

function salvarTarefa(){ // Função para criar um array que vai armazenar tudo que colocar na lista. Replace foi utlizidado para remover o botão da array.

    const liTarefas = tarefas.querySelectorAll('li');
    const listaDeTarefas = [];

    for (let tarefas of liTarefas){

        let tarefaTexto = tarefas.innerText;
        tarefaTexto = tarefaTexto.replace("Apagar", "");
        listaDeTarefas.push(tarefaTexto);
    }

    const tarefasJSON = JSON.stringify(listaDeTarefas); 
    localStorage.setItem("tarefas", tarefasJSON); // Armazenará dentro toda a array em uma mini base de dados do navegador.

}

function adicionaTarefas(){ // Essa função vai ler oq armazenamos anteriormente e adcionará novamente a nossa lista. Ela vai transformar o json em uma string de JS e inseri-la novamente na pagina.

        const tarefas = localStorage.getItem('tarefas');
        const listaDeTarefas = JSON.parse(tarefas);

        for (let tarefa of listaDeTarefas){

           adicionar(tarefa) 

        }

}

adicionaTarefas();
