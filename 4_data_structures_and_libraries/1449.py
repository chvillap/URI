# https://www.urionlinejudge.com.br/judge/en/problems/view/1449

numInstances = int(input())

for i in range(numInstances):
    D = {}
    numWords, numLines = (int(x) for x in input().split(' '))

    for j in range(numWords):
        jp = input()
        pt = input()
        D[jp] = pt

    for j in range(numLines):
        wordlist = input().split(' ')
        translated = ' '.join([D[k] if k in D.keys() else k for k in wordlist])
        print(translated)

    print()
