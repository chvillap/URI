if __name__ == "__main__":
    from sys import argv

    if len(argv) < 2:
        print("Usage: {} start end".format(argv[0]))
    else:
        start, end = [int(x) for x in argv[1:]]
        for i in range(start, end):
            print(i)
