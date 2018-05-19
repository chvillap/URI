# https://www.urionlinejudge.com.br/judge/en/problems/view/1667

import sys
import re

html = ""
for line in sys.stdin:
    html += line

text = html.lstrip()
text = re.sub("(\s|\t)+|\n+", " ", text)
text = re.sub("\s*<hr>\s*", "\n" + ("-" * 80) + "<br>", text)
text = re.sub("\s*<br>\s*", "\n", text)

text_lines = text.split("\n")
i = 0

while i < len(text_lines):
    text_lines[i] = text_lines[i]
    prev_line_end = ""

    if len(text_lines[i]) >= 80:
        curr_line_beg = text_lines[i][:80]

        k = curr_line_beg.rfind(" ")
        if k < 0:
            k = 80

        curr_line_beg = text_lines[i][:k]
        prev_line_end = text_lines[i][k + 1:]
        text_lines[i] = curr_line_beg

    if prev_line_end:
        text_lines = text_lines[:i + 1] + [prev_line_end] + text_lines[i + 1:]
    i += 1

print("\n".join(text_lines), end="\n")
