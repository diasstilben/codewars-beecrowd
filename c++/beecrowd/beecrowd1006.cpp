/*
Beecrowd 1006 - Média 2

Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada:
O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double), um por linha.

Saída:
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 dígito após o ponto decimal e com um espaço em branco antes e depois do sinal de igualdade. Além disso, imprima o fim de linha após o resultado.

Exemplos:
  Exemplo 1
  Entrada:
    5.0
    6.0
    7.0
  Saída:
    MEDIA = 6.3
  Exemplo 2
  Entrada:
    5.0
    10.0
    10.0
  Saída:
    MEDIA = 9.0
  Exemplo 3
  Entrada:
    10.0
    10.0
    5.0
  Saída:
    MEDIA = 7.5
*/

#include <iostream>
#include <iomanip>

int main(){
    double A,B,C;
    std::cin >> A >> B >> C;
    double media = ((A * 2) + (B * 3) + (C * 5)) / 10.0;
    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << std::endl;
    

    return 0;
}