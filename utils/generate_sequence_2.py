def sequence_length(n):
    if n == 0:
        return 1
    if n == 1:
        return 2
    if n == 2:
        return 4
    return 1 + (n * (n + 1)) // 2


if __name__ == "__main__":
    from sys import argv

    if len(argv) < 2:
        print("Usage: {} start end".format(argv[0]))
    else:
        start, end = [int(x) for x in argv[1:]]
        for i in range(start, end):
            print("{}".format(sequence_length(i)))
