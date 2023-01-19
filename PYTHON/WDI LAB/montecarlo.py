

from math import *


def silnia(n):
    if n < 2:
        return 1
    else:
        return n * silnia(n-1)
print(silnia(3 ))

import math


def silnia(n):
    fact = 1
    for num in range(2, n + 1):
        fact *= num
    return silnia


print(silnia(3))

def ciagarek(n):
    if n == 1:
        return -1 
    if n ==2:
        return 1
    else:
        return (ciagarek(n-1) -n -1  )  
print(ciagarek(4))       

def ciagait(n):
    wynik = 1
    if n == 1:
        return -1
    if n == 2:
        return 1
    else:
        for i in range(n-1):
         wynik = (wynik + wynik)  * -1
    return wynik
print (ciagait(4))

def kolejny(n):
    wynik = 0
    if n > 3:
        wynik = (n-2) + (n-3) + (n-1)
        return  wynik
    

print(kolejny(6))









def ciagcrek(n):
    if n == 1:
        return 1
    if n > 1:
        
        return ciagcrek(n-1)*2 + 1 
print(ciagcrek(4))


def ciagcit(n):
    wynik = 0
    if n ==1:
        return 1
    else :
        i = 0 
        while i < n:
            wynik = wynik * 2 +1
            n -= 1
        return wynik
print(ciagcit(4))