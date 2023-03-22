    
    const nomeEu = "Arthur Dos Reis";
    const idade = 19;
    const peso = 62;
    const altura = 1.70;
    let imc, anoNascimento;    

            imc= peso/(altura*altura);
            anoNascimento=2022-19;

        console.log(nomeEu, "tem", idade, "anos, pesa", peso,"kg, tem", altura,"de altura e seu IMC é de", imc.toFixed(1), "e nasceu em", anoNascimento + ".\n"); //Para arrendondar números em JS se utiliza a seguinte função toFixed(1). Ex:console.log(variavel.toFixed(1)) 

        console.log(`${nomeEu} tem ${idade} anos, pesa ${peso} kg, tem ${altura} de altura e seu IMC é de ${imc.toFixed(1)} e nasceu em ${anoNascimento}.\n`); //Para colocar variaveis dentro de uma string se utilizada a expressão ${Nome da Variavel}, sendo necessario toda a string estar dentro de crases ``. 