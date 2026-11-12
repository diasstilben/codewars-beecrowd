/*
Beecrowd 1010 - Cálculo Simples

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada:
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais: o código da peça, o número de peças e o valor unitário da peça.

Saída:
A saída deverá ser a mensagem "VALOR A PAGAR: R$ " seguido do valor total a ser pago, com 2 casas decimais.

Exemplos:
  Exemplo 1
  Entrada:
    12 1 5.30
    16 2 5.10
  Saída:
    VALOR A PAGAR: R$ 15.50
  Exemplo 2
  Entrada:
    13 2 15.30
    161 4 5.20
  Saída:
    VALOR A PAGAR: R$ 51.40
  Exemplo 3
  Entrada:
    1 1 15.10
    2 1 15.10
  Saída:
    VALOR A PAGAR: R$ 30.20
*/

#include <iostream>
#include <iomanip>

int main(){

  int cod1, qtd1, cod2, qtd2;
  float preco1,preco2;

  std::cin >> cod1 >> qtd1 >> preco1;
  std::cin >> cod2 >> qtd2 >> preco2;

  float valortotal =  (qtd1 * preco1) + (qtd2 * preco2);

  std::cout << "VALOR A PAGAR: R$ "<< std::fixed << std::setprecision(2)<< valortotal << std::endl;
    
  return 0;
}