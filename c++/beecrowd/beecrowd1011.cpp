/*
Beecrowd 1011 - Esfera

Faça um programa que calcule e apresente o volume de uma esfera de raio (R) conforme a fórmula: VOLUME = (4/3) * pi * R³. Considere (atribua) para pi o valor 3.14159.
Dica: ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (como o C) assumem que o resultado da divisão entre dois inteiros é um inteiro.

Entrada:
A entrada contém um valor inteiro correspondente ao raio da esfera.

Saída:
A saída é a mensagem "VOLUME" conforme o exemplo abaixo, com um espaço antes e outro depois do sinal de igualdade, e o valor calculado com 3 casas decimais.

Exemplos:
  Exemplo 1
  Entrada:
    3
  Saída:
    VOLUME = 113.097
  Exemplo 2
  Entrada:
    15
  Saída:
    VOLUME = 14137.155
  Exemplo 3
  Entrada:
    1523
  Saída:
    VOLUME = 14797486501.627
*/
#include <iostream>
#include <iomanip> 

int main()
{

  double raio;
  
  std::cin >> raio;
  double volume =  (4/3.0) * (3.14159) * (raio * raio * raio);

  std::cout <<"VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl; 



  return 0;
}