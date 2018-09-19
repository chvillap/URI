import re

N = int(input())

for i in range(N):
    line = input()

    if re.match("^[A-Z]{3}-\d{4}$", line):
        if line[-1] in ["1", "2"]:
            print("MONDAY")
        elif line[-1] in ["3", "4"]:
            print("TUESDAY")
        elif line[-1] in ["5", "6"]:
            print("WEDNESDAY")
        elif line[-1] in ["7", "8"]:
            print("THURSDAY")
        elif line[-1] in ["9", "0"]:
            print("FRIDAY")
    else:
        print("FAILURE")

