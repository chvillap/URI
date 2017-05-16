# https://www.urionlinejudge.com.br/judge/en/problems/view/1254

from sys import stdin
from re import sub
from re import IGNORECASE

for tag in stdin:
    tag = tag[:-1]
    num = input()
    text = input()

    pattern = "(<[\w\d\s=/]*){}([\w\d\s=/]*>)".format(tag)
    replacement = "\g<1>{}\g<2>".format(num)

    prevOutput = ""
    output = text
    while output != prevOutput:
        prevOutput = output
        output = sub(pattern, replacement, prevOutput, flags=IGNORECASE)

    print(output)
