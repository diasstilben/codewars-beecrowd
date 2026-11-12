# Beecrowd 1004 - Produto Simples
#
# Leia dois valores inteiros, identificados como A e B. Calcule o produto entre eles e apresente o resultado.
#
# Entrada:
# A entrada contém 2 valores inteiros, um por linha.
#
# Saída:
# Imprima a variável PROD com todas as letras maiúsculas, com um espaço em branco antes e depois do sinal de igualdade, seguido do valor correspondente ao produto de A e B. Termine com uma quebra de linha.
#
# Exemplos:
#   Exemplo 1
#   Entrada:
#     3
#     9
#   Saída:
#     PROD = 27
#   Exemplo 2
#   Entrada:
#     -30
#     10
#   Saída:
#     PROD = -300
#   Exemplo 3
#   Entrada:
#     0
#     9
#   Saída:
#     PROD = 0

A = int(input())
B = int(input())
PROD = A * B
print(f"PROD = {PROD}")