function diaSemanaTexto(date){

    let diaSemanaTexto;

    switch(date){

        case 0:
            diaSemanaTexto = "Domingo";
            return diaSemanaTexto;
        case 1:
            diaSemanaTexto = "Segunda-Feira";
            return diaSemanaTexto;
        case 2:
            diaSemanaTexto = "Terça-Feira";
            return diaSemanaTexto;
        case 3:
            diaSemanaTexto = "Quarta-Feira";
            return diaSemanaTexto;
        case 4:
            diaSemanaTexto = "Quinta-Feira";
            return diaSemanaTexto;
        case 5: 
            diaSemanaTexto = "Sexta-Feira";
            return diaSemanaTexto;
        case 6:
            diaSemanaTexto = "Sabado";
            return diaSemanaTexto;
        default:
            diaSemanaTexto = "";
            return diaSemanaTexto;

    }


}


const dataAleatoria = new Date("1964-01-22 00:00:00");
const dataDiaSemana = dataAleatoria.getDay();
const diaSemana = diaSemanaTexto(dataDiaSemana);

console.log(dataDiaSemana, diaSemana);