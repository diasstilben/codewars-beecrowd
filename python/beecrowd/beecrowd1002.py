# Beecrowd 1002 - Área do Círculo
#
# A fórmula para calcular a área de uma circunferência é: area = π . raio². Considerando para este problema que π = 3.14159, efetue o cálculo da área e apresente o resultado.
#
# Entrada:
# A entrada contém um valor de ponto flutuante (dupla precisão), correspondente ao raio do círculo.
#
# Saída:
# Apresente a mensagem "A=" seguida do valor da área, com 4 casas após o ponto decimal e uma quebra de linha.
#
# Exemplos:
#   Exemplo 1
#   Entrada:
#     2.00
#   Saída:
#     A=12.5664
#   Exemplo 2
#   Entrada:
#     100.64
#   Saída:
#     A=31819.3103
#   Exemplo 3
#   Entrada:
#     150.00
#   Saída:
#     A=70685.7750

n = 3.14159
raio = float(input())
area = n * (raio * raio)
print(f"A={area:.4f}")