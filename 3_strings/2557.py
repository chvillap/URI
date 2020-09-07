# -*- coding: utf-8 -*-
# https://www.urionlinejudge.com.br/judge/en/problems/view/2557

from sys import stdin
from re import split

for line in stdin:
    R, L, J = tuple(split("\W+", line[:-1]))

    if R == 'R':
        print(int(J) - int(L))
    elif L == 'L':
        print(int(J) - int(R))
    else:
        print(int(R) + int(L))
