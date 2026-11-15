/*
Beecrowd 1018 - Cédulas

Leia um valor inteiro. A seguir, calcule o menor número possível de notas (cédulas) no qual o valor pode ser decomposto. As notas que você deve considerar são de 100, 50, 20, 10, 5, 2 e 1. Na sequência mostre o valor lido e a relação de notas necessárias.

Entrada:
A entrada contém um valor inteiro N (0 < N < 1000000).

Saída:
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, no formato do exemplo abaixo.

Exemplos:
  Exemplo 1
  Entrada:
    576
  Saída:
    576
    5 nota(s) de R$ 100,00
    1 nota(s) de R$ 50,00
    1 nota(s) de R$ 20,00
    0 nota(s) de R$ 10,00
    1 nota(s) de R$ 5,00
    0 nota(s) de R$ 2,00
    1 nota(s) de R$ 1,00
  Exemplo 2
  Entrada:
    503
  Saída:
    503
    5 nota(s) de R$ 100,00
    0 nota(s) de R$ 50,00
    0 nota(s) de R$ 20,00
    0 nota(s) de R$ 10,00
    0 nota(s) de R$ 5,00
    1 nota(s) de R$ 2,00
    1 nota(s) de R$ 1,00
*/
#include <iostream>

int main(){

  int valor;
  std::cin >> valor;
  std::cout << valor << std::endl;

  int notas[7] = {100,50,20,10,5,2,1};
  for(int i = 0; i < 7; i ++){
    int temp = valor / (notas[i]);
    std::cout << temp << " nota(s) de R$ " << notas[i] << ",00" << std::endl;
    valor = valor % notas[i];

  }

}





/*
int main(){

  int valor;
  std::cin >> valor;
  std::cout << valor << std::endl;
  int nota100 = valor / 100;
  std::cout << nota100 << " nota(s) de R$ 100,00"<< std::endl;
  valor = valor % 100;
  int nota50 = valor / 50;
  std::cout << nota50 << " nota(s) de R$ 50,00"<< std::endl;
  valor = valor % 50;
  int nota20 = valor / 20;
  std::cout << nota20 << " nota(s) de R$ 20,00"<< std::endl;
  valor = valor % 20;
  int nota10 = valor / 10;
  std::cout << nota10 << " nota(s) de R$ 10,00"<< std::endl;
  valor = valor % 10;
  int nota5 = valor / 5;
  std::cout << nota5 << " nota(s) de R$ 5,00" << std::endl;
  valor = valor %  5;
  int nota2 = valor / 2;
  std::cout << nota2 << " nota(s) de R$ 2,00" << std::endl;
  valor = valor % 2;
  int nota1 = valor / 1;
  std::cout << nota1 << " nota(s) de R$ 1,00" << std::endl; 
  



  return 0; 
}

*/