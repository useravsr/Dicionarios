//Função geradora vai pausar em determinados momentos do codigo 

function* geradora1(){

    yield 'Valor1';  //yield é usada para pausar e resumor uma generator function.
    yield 'Valor2';
    yield 'Valor3';

}

const g1 = geradora1();

console.log(g1.next());
console.log(g1.next());
console.log(g1.next());
console.log(g1.next());

// Exemplo de uma função com contador infinito 

function* geradora2(){ 

    let i = 0;

    while(true){

        yield i;
        i++;

    }

}

const g2 = geradora2()

for(let i=0; i<= 10; i++){

    console.log(g2.next().value);

}

// Geradora que delega tarefas para outras geradoras

function* geradora3(){

    yield 0;
    yield 1;
    yield 2;
    
}

function* geradora4(){

    yield* geradora3();
    yield 3;
    yield 4;
    yield 5;

}

const g4 = geradora4();

for(let valor of g4){

    console.log(valor);

}

// Mais um exemplo de outras possibilidades de usabilidade do yield

function* geradora5(){

    yield function(){

        console.log("Vim do y1");

    };

    return function(){  // Nada abaixo de return é lido, mesmo sendo uma função geradora

        console.log("Vim do return");

    };

    yield function(){

        console.log("Vim do y2");

    };

}

const g5 = geradora5();
const func1 = g5.next().value;
const func2 = g5.next().value;

func1();
func2();