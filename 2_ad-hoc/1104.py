# https://www.urionlinejudge.com.br/judge/en/problems/view/1104

while True:
    A, B = [int(n) for n in input().split()]
    if A == B == 0:
        break

    X = set([int(n) for n in input().split()])
    Y = set([int(n) for n in input().split()])

    print(min(len(X.difference(Y)), len(Y.difference(X))))
