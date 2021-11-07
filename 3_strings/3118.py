# https://www.beecrowd.com.br/judge/en/problems/view/3118

from re import findall

N, M = (int(x) for x in input().split())

rules = {}
for i in range(M):
    key, val = input().split()
    rules[key] = val

bacteria = "A"

for i in range(N):
    tmp_str = ""
    groups = findall(r"(A+|B+)", bacteria)
    for g in groups:
        if g in rules:
            tmp_str += rules[g]
        else:
            tmp_str += g
    bacteria = tmp_str

counts = [bacteria.count(c) for c in "AB"]
print(f"{counts[0]} {counts[1]}")
