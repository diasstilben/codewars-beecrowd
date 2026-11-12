/*
Beecrowd 1003 - Soma Simples

Leia dois valores inteiros, identificados como A e B. Calcule a soma entre eles e apresente o resultado.

Entrada:
A entrada contém 2 valores inteiros, um por linha.

Saída:
Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois do sinal de igualdade, seguido do valor correspondente à soma de A e B. Termine com uma quebra de linha.

Exemplos:
  Exemplo 1
  Entrada:
    30
    10
  Saída:
    SOMA = 40
  Exemplo 2
  Entrada:
    -30
    10
  Saída:
    SOMA = -20
  Exemplo 3
  Entrada:
    0
    0
  Saída:
    SOMA = 0
*/

#include <iostream>

int main(){
    int A,B;
    std::cin >> A >> B;
    int soma = A + B;
    std::cout << "SOMA = " << soma << std::endl;


    return 0;
}