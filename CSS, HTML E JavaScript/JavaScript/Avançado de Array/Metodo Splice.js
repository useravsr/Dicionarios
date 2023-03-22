//A função splice faz o que Pop(Remove o ultimo elemento), Push(Adiciona um elemento na ultima posição), Shift(Remove o primeiro elemento) e Unshift(Adiciona um elemento na primeira posição) faz.
//Assim como essas funções splice mexe no array original.

//               -5       -4       -3         -2        -1
//                0        1        2          3         4
const nomes = ['Maria', 'João', 'Eduardo', 'Gabriel', 'Julia'];

// nomes.splice(índice, delete, 'elem1', 'elem2', 'elem3');

//Função completa de splice

const splice = nomes.splice(3, Number.MAX_VALUE, 'Junior', 'Matheus'); //Primeiro vem o indice, a quantidade de elementos que serão removidos, depois os elementos a serem adicionados depois do indice indicado. Number.MAX_VALUE - É o número maximo que esse array pode chegar, que nesse caso, são 2.
console.log(nomes, splice);

// Pop (Remove o ultimo elemento) - O splice diferente de pop remove e armazena em outro array.

const pop = nomes.splice(-1, 1);
console.log(nomes, pop)

// Shift(Remove o primeiro elemento)

const shift = nomes.splice(0, 1);
console.log(nomes, shift)

//Push (Adiciona um elemento na ultima posição)

nomes.splice(5, 0, 'Thamires');
console.log(nomes)

// Unshift(Adiciona um elemento na primeira posição)

nomes.splice(2, 0, 'Luiz', 'Otávio');
console.log(nomes);