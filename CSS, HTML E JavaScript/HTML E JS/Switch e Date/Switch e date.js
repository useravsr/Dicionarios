const resultado = document.querySelector("#resultado");
const data = new Date();
const opcoes = {

    dateStyle: 'full',
    timeStyle: 'medium'

};
function interval(){

    const data = new Date()
    resultado.innerHTML = data.toLocaleString('pt-BR', opcoes);

}

setInterval(interval, 1000); // toLocaleDateString não funciona mais com timeStyle, agr é utilizado toLocaleString.

// Essas 10 linhas resumem todas as que estão aqui em baixo...



/*

const resultado = document.querySelector("#resultado")
const dataAtual = new Date(Date.now());
const diaSemanaAtual = dataAtual.getDay();
const diaAtual = dataAtual.getDate();
const mesAtual = dataAtual.getMonth() + 1;
const anoAtual = dataAtual.getFullYear();
const horaAtual = dataAtual.getHours();
const minutosAtual = dataAtual.getMinutes();
const segundosAtual = dataAtual.getSeconds();

    function textoSemana(semanaDia){

        switch(semanaDia){

            case 0:
                textoSemana = "Domingo";
                return textoSemana;
            case 1:
                textoSemana = "Segunda-Feira";
                return textoSemana;
            case 2:
                textoSemana = "Terça-Feira";
                return textoSemana;
            case 3:
                textoSemana = "Quarta-Feira";
                return textoSemana;
            case 4:
                textoSemana = "Quinta-feira";
                return textoSemana;
            case 5:
                textoSemana = "Sexta-Feira";
                return textoSemana;
            case 6:
                textoSemana = "Sabado";
                return textoSemana;
            default:
                textoSemana = "";
                return textoSemana;
                
            }
            
    }

    function textoMes(mes){

        switch(mes){

            case 1:
                return "Janeiro";
            case 2:
                return "Fevereiro";
            case 3:
                return "Março";
            case 4:
                return "Abril";
            case 5:
                return "Maio";
            case 6:
                return "Junho";
            case 7:
                return "Julho";
            case 8:
                return "Agosto";
            case 9:
                return "Setembro";
            case 10:
                return "Outubro";
            case 11:
                return "Novembro";
            case 12:
                return "Dezembro";
            default:
                return "";

        }

    }

resultado.innerHTML = `${textoSemana(diaSemanaAtual)}, ${diaAtual} de ${textoMes(mesAtual)} de ${anoAtual} <br> ${horaAtual}:${minutosAtual}:${segundosAtual} `

*/