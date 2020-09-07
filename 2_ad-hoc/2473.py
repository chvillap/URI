# -*- coding: utf-8 -*-
# https://www.urionlinejudge.com.br/judge/en/problems/view/2473

flavinho = set(input().split(" "))
sorteado = set(input().split(" "))

acertos = len(flavinho & sorteado)

if acertos == 3:
    print("terno")
elif acertos == 4:
    print("quadra")
elif acertos == 5:
    print("quina")
elif acertos == 6:
    print("sena")
else:
    print("azar")
