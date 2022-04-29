#include <iostream>

using namespace std;

int n1 = 10,n2 = 5;

int main(){

    int soma = 0;
    int subtracao = 0;
    int multiplicacao = 0;
    int divisao = 0;
    int divisao2 = 0;
    int divisaoComNumeradorFlutuante = 0;

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;
    divisao2 = n1 / 3.4;
    divisaoComNumeradorFlutuante = 4.5 / 3;

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl; // divisão correta, sem erros

    /* divisão incorreta, por erro de tipagem, os pontos flutuantes são ignorados*/
    cout << "Divisão com erro devido a tipagem: " << divisao2 << endl; // retorna 2

    /* divisão incorreta, por erro de tipagem, os pontos flutuantes são ignorados*/
    cout << "Divisão com erro devido a tipagem no numerador: " << divisaoComNumeradorFlutuante << endl; // retorna 1

    return 0;
}