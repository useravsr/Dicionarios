//try tentará executar, caso encontre um erro, catch armazenará e o dev poderá tomar alguma atitude quanto ao que deve ser feito com esse erro. Basicamente um if else com erros.

try {

    console.log(naoExisto);

} catch (err) {

    console.log("naoExisto não existe.");
    console.log(err);

}

// throw lançará um erro para o usuário.

function soma(x, y){

    if(typeof x !== 'number' || typeof y !== 'number'){
        throw new ReferenceError("X e Y precisam ser números") // new ReferenceError ou new Error deixa nosso erro igual ao do js com todas as informações, caso não utilizado será exibido apenas a string que nós criamos.
    }

    return x+y;

}
    try{
    console.log(soma(1, 1));
    console.log(soma("u", "s"));
    } catch(error){

        console.log(error)

    }