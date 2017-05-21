# https://www.urionlinejudge.com.br/judge/en/problems/view/1519

while True:
    line = input()
    if line == '.':
        break

    words = line.split()

    frequencies = {k: 0 for k in words}
    for word in words:
        frequencies[word] += 1

    words_sort = sorted(words, key=lambda x: (len(x) - 2) * frequencies[x])

    abbreviations = {}
    for word in words_sort:
        abbreviations[word[0] + '.'] = word
    abbreviations = {v: k for k, v in abbreviations.items() if len(v) > 2}

    abbreviations_ext = abbreviations.copy()
    abbreviations_ext.update({v: v for v in words if v not in abbreviations})

    print(abbreviations_ext[words[0]], end='')
    for word in words[1:]:
        print(' ' + abbreviations_ext[word], end='')

    print('\n{}'.format(len(abbreviations)))

    words_abbr = sorted(abbreviations.keys())
    for word in words_abbr:
        print(abbreviations[word] + ' = ' + word)
