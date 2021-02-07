# https://www.urionlinejudge.com.br/judge/pt/problems/view/2893

T = int(input())

while T:
    k, N = (int(x) for x in input().split(" "))
    
    fibo = [0] + [None] * 20000
    summ = [0] + [None] * 20000
    
    for i in range(1, k + 1):
        fibo[i] = i
        summ[i] = summ[i - 1] + i
    
    j = 0
    for i in range(k, N):
        fibo[i] = summ[i - 1]
        summ[i] = summ[i - 1] + fibo[i] - fibo[j]
        j += 1

    print(fibo[N - 1] % 1000007)

    T -= 1
