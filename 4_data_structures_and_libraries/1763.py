# https://www.urionlinejudge.com.br/judge/en/problems/view/1763

from sys import stdin
from collections import defaultdict

pairs = (
    ("brasil", "Feliz Natal!"),
    ("alemanha", "Frohliche Weihnachten!"),
    ("austria", "Frohe Weihnacht!"),
    ("coreia", "Chuk Sung Tan!"),
    ("espanha", "Feliz Navidad!"),
    ("grecia", "Kala Christougena!"),
    ("estados-unidos", "Merry Christmas!"),
    ("inglaterra", "Merry Christmas!"),
    ("australia", "Merry Christmas!"),
    ("portugal", "Feliz Natal!"),
    ("suecia", "God Jul!"),
    ("turquia", "Mutlu Noeller"),
    ("argentina", "Feliz Navidad!"),
    ("chile", "Feliz Navidad!"),
    ("mexico", "Feliz Navidad!"),
    ("antardida", "Merry Christmas!"),
    ("canada", "Merry Christmas!"),
    ("irlanda", "Nollaig Shona Dhuit!"),
    ("belgica", "Zalig Kerstfeest!"),
    ("italia", "Buon Natale!"),
    ("libia", "Buon Natale!"),
    ("siria", "Milad Mubarak!"),
    ("marrocos", "Milad Mubarak!"),
    ("japao", "Merii Kurisumasu!"))

dd = dict(pairs)

while True:
    try:
        country = input()
    except EOFError:
        break
    else:
        try:
            message = dd[country]
        except KeyError:
            print("--- NOT FOUND ---")
        else:
            print(message)

