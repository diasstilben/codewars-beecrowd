# Beecrowd 1005 - Média 1
#
# Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (a soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
#
# Entrada:
# A entrada contém 2 valores com uma casa decimal cada, um por linha.
#
# Saída:
# Calcule e imprima a variável MEDIA conforme exemplo abaixo, com 5 casas decimais, com um espaço em branco antes e depois do sinal de igualdade. Utilize variáveis de dupla precisão (double) e todas as letras maiúsculas em MEDIA. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
#
# Exemplos:
#   Exemplo 1
#   Entrada:
#     5.0
#     7.1
#   Saída:
#     MEDIA = 6.43182
#   Exemplo 2
#   Entrada:
#     0.0
#     7.1
#   Saída:
#     MEDIA = 4.84091
#   Exemplo 3
#   Entrada:
#     10.0
#     10.0
#   Saída:
#     MEDIA = 10.00000

A = float(input())
B = float(input())

MEDIA = ( (A * 3.5) + (B * 7.5) ) / 11
print(f"MEDIA = {MEDIA:.5f}")