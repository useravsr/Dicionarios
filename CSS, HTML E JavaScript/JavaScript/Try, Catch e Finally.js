/*
try{

    // É executada quando não há erros.

    console.log("Abri o arquivo");
    console.log("Manipulei o arquivo e gerou erro");
    console.log("Fechei o arquivo");
    console.log(a) // ERRO

} catch (e){

    // É executada quando há erros. 

    console.log("Tratando o erro, caso ele exista");

} finally {

    // Será executando sempre. 

    console.log("FINALLY: Sempre sou executado")

}
*/

function retornaHora(data){

    if(data && !(data instanceof Date)){

        throw new TypeError("Esperando uma instância de Date.");

    }
    if(!data){
        data = new Date()
    }

    return data.toLocaleString("pt-br", {

        dateStyle : "medium",
        timeStyle : "short" 

    })

}

const hora = retornaHora(new Date('01-01-1970 12:58:12'));
console.log(hora);