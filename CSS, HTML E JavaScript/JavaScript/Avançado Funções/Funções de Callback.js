// As funções nunca serão executadas uma antes da outra, seguirão a ordem.
// Callback é uma função que sera executada dentro da outra.

function rand (min = 1000, max = 3000){

    const num = Math.random() * (max - min) + min;
    console.log(num)
    return Math.round(num);

}
      
function f1(callback){

    setTimeout(function(){ 

        console.log("f1");
        
        if(callback) callback();
        

    }, rand() );


}
function f2(callback){

    setTimeout(function(){ 

        console.log("f2");

        if(callback) callback();
        

    }, rand() );

   

}
function f3(callback){

    setTimeout(function(){ 

        console.log("f3");
        
        if(callback) callback();        

    }, rand() );


}


f1(f1callback);

function f1callback(){

   f2(f2callback);

}

function f2callback(){

    f3(f3callback);

}
function f3callback(){

    console.log("Hello world!");

}
