if __name__ == "__main__":
    from sys import argv

    if len(argv) < 2:
        print("Usage: {} N".format(argv[0]))
    else:
        N = int(argv[1])
        for i in range(N):
            print("0", end="")
            for n in range(1, i + 1):
                print((" %d" % n) * n, end="")
            print()
