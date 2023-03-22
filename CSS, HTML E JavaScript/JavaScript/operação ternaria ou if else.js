// (condição) ? "Valor para verdadeiro" : "Valor para falso"

const pontuacaoUsuario = 900
const nivelUsuario = pontuacaoUsuario >= 1000 ? console.log("Usuário VIP") : console.log("Usuário normal")  //Isso que todo aquele if else resumido em uma linha

  if (pontuacaoUsuario >= 1000){

        console.log("Usuário VIP");

    }else console.log("Usuário Normal!");
   
    


const corUsuario = null;
const corPrimaria = corUsuario || "Branco"; //Caso a Variavel corUsuario não receba nenhum valor, corPrimaria receberá branco.

