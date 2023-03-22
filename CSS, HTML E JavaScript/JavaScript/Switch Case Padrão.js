const data = new Date("1964-01-19 00:00:00");
const dataSemana = data.getDay();
let diaSemanaTexto;

    switch(dataSemana){

       case 0: 
            diaSemanaTexto = "Domingo"
            break;

        case 1:
            diaSemanaTexto = "Segunda-Feira";
            break;
        case 2:
            diaSemanaTexto = "Terça-Feira";
            break;

        case 3:
            diaSemanaTexto = "Quarta-Feira";
            break;

        case 4:
            diaSemanaTexto = "Quinta-Feira";
            break;
        
        case 5:
            diaSemanaTexto = "Sexta-Feira";
            break;
        
        case 6:
            diaSemanaTexto = "Sabado";
            break;
        
        default:
            diaSemanaTexto = "";
            break;
    }

console.log(dataSemana, diaSemanaTexto);