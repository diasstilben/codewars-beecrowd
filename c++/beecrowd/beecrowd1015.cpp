/*
Beecrowd 1015 - Distância Entre Dois Pontos

Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
Distancia = raiz((x2-x1)² + (y2-y1)²)

Entrada:
A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída:
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

Exemplos:
  Exemplo 1
  Entrada:
    1.0 7.0
    5.0 9.0
  Saída:
    4.4721
  Exemplo 2
  Entrada:
    -2.5 0.4
    12.1 7.2
  Saída:
    16.1059
  Exemplo 3
  Entrada:
    2.5 -0.4
    -12.2 7.0
  Saída:
    16.4575
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    
    double distancia = std::sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    
    std::cout << std::fixed << std::setprecision(4) << distancia << "\n";

    return 0;
}