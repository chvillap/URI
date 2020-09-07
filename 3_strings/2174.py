# -*- coding: utf-8 -*-
# https://www.urionlinejudge.com.br/judge/en/problems/view/2174

N = int(input())
S = set()

for i in range(N):
    S.add(input())

print("Falta(m) %d pomekon(s)." % (151 - len(S)))
