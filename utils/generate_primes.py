# Sieve of Erastothenes for dynamic prime number generation.
# http://stackoverflow.com/questions/567222/simple-prime-generator-in-python


def generate_primes(n=None):
    """ Generate a potentially infinite sequence of prime numbers.
    """
    factors = {}
    count = 0
    p = 2
    while n is None or n > count:
        if p not in factors:
            count += 1
            yield p
            factors[p * p] = [p]
        else:
            for x in factors[p]:
                factors.setdefault(p + x, []).append(x)
            del factors[p]
        p += 1


if __name__ == "__main__":
    from sys import argv

    if len(argv) < 2:
        print("Usage: {} n".format(argv[0]))
    else:
        n = int(argv[1])
        for i in generate_primes(n):
            print(i)
