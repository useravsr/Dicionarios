// Funções recursivas chamam a si mesmas até encontrar algo que a impressa de fazer isso. 

function recursiva(max){

    if(max >= 10) return;
    max++;
    console.log(max);
    recursiva(max)

}

recursiva(-10);