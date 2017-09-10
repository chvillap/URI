if __name__ == '__main__':
    from sys import argv

    if len(argv) < 3:
        print('Usage: {} N M'.format(argv[0]))
    else:
        N = int(argv[1])
        M = int(argv[2])

        jumps = [[]]
        for r in range(1, N + 1):
            jumps.append([])

            for i in range(2, N // 2 + 1):
                fwd = r + (2 * i - 1)
                bwd = r - (2 * i - 1)

                if fwd >= 1 and fwd <= N:
                    jumps[r].append(fwd)
                if bwd >= 1 and bwd <= N:
                    jumps[r].append(bwd)

            jumps[r].sort()

        for r in range(1, N + 1):
            print('{}: {}'.format(r, jumps[r]))
