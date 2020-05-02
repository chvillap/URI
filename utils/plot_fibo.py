import sys
import matplotlib.pyplot as plt

if __name__ == '__main__':
    if len(sys.argv) > 1:
        k = int(sys.argv[1])
        fibonacci = [0, 1]
        for i in range(k - 1):
            fibonacci.append(fibonacci[-1] + fibonacci[-2])
        fibonot = [x for x in range(fibonacci[-1]) if x not in fibonacci[1:]]
        plt.subplot(1, 2, 1)
        plt.plot(range(1, k + 1), fibonacci[1:])
        plt.xlabel('k')
        plt.ylabel('k-th Fibonacci number')
        plt.subplot(1, 2, 2)
        plt.plot(range(1, k + 1), fibonot[1:(k + 1)])
        plt.xlabel('k')
        plt.ylabel('k-th Fibonot number')
        plt.show()
        print(fibonacci[1:])
        print(fibonot[1:(k + 1)])
    else:
        print('Usage: {} k-index'.format(sys.argv[0]))
