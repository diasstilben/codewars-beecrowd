/*
Beecrowd 1012 - Área

Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada:
O arquivo de entrada contém três valores com um dígito após o ponto decimal, na mesma linha.

Saída:
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

Exemplos:
  Exemplo 1
  Entrada:
    3.0 4.0 5.2
  Saída:
    TRIANGULO: 7.800
    CIRCULO: 84.949
    TRAPEZIO: 18.200
    QUADRADO: 16.000
    RETANGULO: 12.000
  Exemplo 2
  Entrada:
    12.7 10.4 15.2
  Saída:
    TRIANGULO: 96.520
    CIRCULO: 725.834
    TRAPEZIO: 175.560
    QUADRADO: 108.160
    RETANGULO: 132.080
*/
#include <iostream>
#include <iomanip>

int main(){

  double A, B, C;
  std::cin >> A >> B >> C;
  double areatrig =  (A * C) / 2;
  double areacirc =  3.14159 * (C * C);
  double areatrap =  ((A + B) * C ) / 2;
  double areaquadr =  B * B;
  double arearetang = A * B;

  std::cout <<"TRIANGULO: " << std::fixed << std::setprecision(3) << areatrig << std::endl;
  std::cout <<"CIRCULO: " << std::fixed << std::setprecision(3) << areacirc << std::endl;
  std::cout <<"TRAPEZIO: " << std::fixed << std::setprecision(3) << areatrap << std::endl;
  std::cout <<"QUADRADO: " << std::fixed << std::setprecision(3) << areaquadr << std::endl;
  std::cout <<"RETANGULO: " << std::fixed << std::setprecision(3) << arearetang << std::endl;

  return 0;
}