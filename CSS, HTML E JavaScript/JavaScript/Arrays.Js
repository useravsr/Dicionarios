const alunos = ["Arthur", "João", "Daniel", "Paulo", "Kevin"];
let i;
    
    // alunos ["NÚMERO"] = "Mario; - Altera/adiciona elemntos na array.
    
    // alunos [alunos.length] = "Mario"; - Adicionar novos elementos no fim da array.
    
    // alunos.push("Mario"); - Adicionar elementos no fim da array.
    
    // alunos.pop(); - Remove o último elemento da Array.
    
    // alunos.unshift("Mario"); - Adiciona novos elementos no começo da array.

    // alunos.shift(); - Remove o primeiro elemento da Array.

    // alunos.join(); - Junta os elementos em uma frase. Com o parenteses vazio, ele colocará virgulas entre os elementos; Com "" juntas, ficará tudo junto e por ai vai. 

    // delete alunos["NÚMERO"]; - Remove um elemento especifico da Array, deixando um espaço vazio.
    
    // alunos.slice(INICIO, FIM); - Recorta um pedaço da Array. O número do fim deve ser negativo.

    // Para copiar uma array para outra: const alunos1 = [...alunos]; caso nn seja feito dessa forma, todas as vezes que a array sofre uma alteração, essa alteração acontecera para todas as variáveis que receberam esse valor.

    for (i=0; i<=4; i++){

        console.log(alunos[i]); 

    }
    