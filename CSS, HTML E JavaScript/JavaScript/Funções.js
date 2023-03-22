function tomate(num1 = 1, num2 = 1){ // Valor padrão, caso nenhum valor seja enviado para as variáveis. Se algum valor for enviado, os valores ali inseridos serão ignorados.

    const resultado = num1 + num2;
    return resultado; // Tudo que está abaixo de return não será executado.

    //console.log (num1 * num2);
    //return num1 + num2;
    
}

//const variavel = tomate (2, 5);
//console.log(variavel);

let num1 = 2;
let num2 = 8;

console.log(tomate(num1, num2));



const raiz = function (n) {

    return n ** 0.5;

}

console.log(raiz(10))




const arrow =  n =>  n ** 0.5;  //Arrow function, uma forma mais simplificada de fazer uma função =>

console.log(arrow(25))