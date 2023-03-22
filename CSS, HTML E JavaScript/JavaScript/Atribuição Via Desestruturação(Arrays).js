// ... rest, ... spread

const numeros = [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000];
const [num1, num2, num3] = numeros;
const [um, , tres, , cinco, , sete] = numeros;

    console.log(num1, num2, num3);
    console.log(um, tres, cinco, sete);

const grade = [

  // 0  1  2    
    [1, 2, 3],  // 0
    [4, 5, 6],  // 1
    [7, 8, 9]   // 2

]
const [lista1, lista2, lista3] = grade
console.log(lista1[2])