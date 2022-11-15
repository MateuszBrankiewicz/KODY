from math import *
S = []
n = int(input("Podaj potęgę liczby 2: "))
while n > 1:
    S.append(pow(2, n))
    n -= 1
def MINMAX(S):
    maximum = S[0]
    minimum = S[0]
    for i in S:
        if i > maximum:
            maximum = i
    for i in S:
        if minimum > i:
            minimum = i
    return minimum,  maximum

def main(S):
    if len(S) == 2 or len(S) == 1:
        (min0, max0) = MINMAX(S)
        return min0, max0, S
    else:
        S1 = S[:len(S)//2]
        S2 = S[len(S)//2:]
        (min1, max1) = MINMAX(S1)
        (min2, max2) = MINMAX(S2)
        return "Min//Max 1 polowy: " + str(min1) + "//"+ str(max1) + "\n" + "Min//Max 2 polowy: " + str(min2) + "//" + str(max2) + "\n" + "Tablice 1 i 2 polowy: " + str(S1) + "\t" + str(S2)
print(main(S))