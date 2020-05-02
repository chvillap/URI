# https://www.urionlinejudge.com.br/judge/en/problems/view/2783

N, C, M = input().split(' ')
stamped = [int(x) for x in input().split(' ')]
purchased = [int(x) for x in input().split(' ')]

print(len([x for x in stamped if x not in purchased]))
