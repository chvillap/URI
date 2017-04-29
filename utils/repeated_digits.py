if __name__ == "__main__":
    from sys import argv

    if len(argv) < 2:
        print("Usage: {} start end".format(argv[0]))
    else:
        start, end = [int(x) for x in argv[1:]]
        for i in range(start, end):
            digits = []
            n = i
            while n > 0:
                digits.append(n % 10)
                n //= 10
            if len(digits) > len(set(digits)):
                print(i)
