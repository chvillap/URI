import sys

def fibonacci():
    a, b = 0, 1
    yield b
    while True:
        yield a + b
        a, b = b, a + b


if __name__ == '__main__':
    if len(sys.argv) > 1:
        k = int(sys.argv[1])
        fibonot = []
        f_gen = fibonacci()
        a = next(f_gen)
        b = next(f_gen)
        while len(fibonot) < k:
            print(a, b)
            if b - a > 1:
                i = a + 1
                while i < b and len(fibonot) < k:
                    fibonot.append(i)
                    i += 1
            a = b
            b = next(f_gen)
        print(fibonot)
        print('last fibonacci number: {}'.format(b))
    else:
        print('Usage: {} k'.format(sys.argv[0]))
