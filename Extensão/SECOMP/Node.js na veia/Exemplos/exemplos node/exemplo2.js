//funções podem (ou não) ter retorno e parâmetros
//no JS, o número de parâmetros efetivamente passados não causa erros
//mas só se pode usar os que estão definidos e foram passados
function soma(a, b){
    let resultado = a + b;

    return resultado;
}

let numero1 = 10;
let resultado = soma(numero1, 5);
console.log(resultado);
//console.log(soma(1,2,55)); //saída: 3

//funções podem ser passadas como parâmetros
function imprimeNaTela(mensagem){
    console.log("-*-*-*-*-*");
    console.log(mensagem);
}

function enviaQuadrado(numero, saida){
    let resultado = numero * numero;
    saida(resultado);
}

enviaQuadrado(3, imprimeNaTela);
