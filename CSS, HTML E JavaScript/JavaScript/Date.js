/* 
    Anotações:

        - Os meses vão de 0-11
        - Para a hora sair em um formato bonitinho é necessaria a função toString()
        - 0 - Domingo, 1 - Segunda, 2 - Terça, 3 - Quarta, 4 - Quinta, 5 - Sexta, 6 - Sábado

*/
const tresHoras = 60 * 60 * 3 * 1000;
const umDia = 60 * 60 * 24 * 1000; 
const dataUnix = new Date(0 + tresHoras - umDia); // 01/01/1970 Timestamp unix ou época unix  
// const data = new Date(2019, 2, 20, 15, 14, 27); // Ano, mes, dia, hora, minutos, segundos, milisegundos;
const data = new Date('2019-04-20 20:20:59');

        console.log("Dia", data.getDate()); //Função para exibir o dia
        console.log("Mês", data.getMonth() + 1); //Função para exibir o mês. Obs os meses vão de 0-11 para fique certo, somar + 1 dependendo do caso.
        console.log("Ano", data.getFullYear()); //Função para exibir o ano
        console.log("Hora", data.getHours()); //Função para exibir a hora
        console.log("Min", data.getMinutes()); //Função para exibir os minutos
        console.log("Seg", data.getSeconds()); //Função para exibir os segundos
        console.log("Ms", data.getMilliseconds()); //Função para exibir os milisegundos
        console.log("Dia Semana", data.getDay()); //Função para exibir o dia da semana
        console.log(data.toString());  //Função para exibir a data completa
        console.log(Date.now()); // Retornará a quantidade de milesimos de segundo da hora zero (Época Unix) até os dias de hj, que se colocados dentro da função Date(), informará a data atual. Saída = 1662101031296