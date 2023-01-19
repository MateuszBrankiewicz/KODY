# from random import random
# def obliczPi(n):
#     if n <= 1:
#         return None
#     m = 0
#     for i in range(n):
#         x = random()
#         y = random()
#         if x*x + y*y <= 1:
#             m += 1
#     return 4.0 * m / n
# print(obliczPi(10000))

from random import random
from math import sqrt
def opi(n):
    licz = 0
    for i in range(n):
        x = random()
        y = random()
        l = sqrt(pow(x-0.5, 2) + pow(y-0.5, 2))
        if l < 0.5:
            licz +=1 
        return licz/(n*0.25)
print(opi(100))