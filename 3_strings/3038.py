# https://www.beecrowd.com.br/judge/en/problems/view/3038

from sys import stdin

F = stdin.read()
T = F.maketrans("@&!*#", "aeiou")

print(F.translate(T))
