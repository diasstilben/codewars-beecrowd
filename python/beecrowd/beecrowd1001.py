# Beecrowd 1001 - Extremamente Básico
#
# Leia 2 valores inteiros e armazene-os nas variáveis A e B. Faça a soma entre elas e atribua o resultado à variável X. Imprima X.
#
# Entrada:
# A entrada contém 2 valores inteiros, um por linha.
#
# Saída:
# Imprima a mensagem "X = " (com espaços antes e depois do sinal de igualdade) seguida do valor de X, e uma quebra de linha.
#
# Exemplos:
#   Exemplo 1
#   Entrada:
#     10
#     9
#   Saída:
#     X = 19
#   Exemplo 2
#   Entrada:
#     -10
#     4
#   Saída:
#     X = -6
#   Exemplo 3
#   Entrada:
#     15
#     -7
#   Saída:
#     X = 8

A = int(input())
B = int(input())
SOMA = A + B
print(f"X = {SOMA}")

