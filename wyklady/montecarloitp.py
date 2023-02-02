#--------------------------------------

#MOMTECARLO OBLICZA PI

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
# print(obliczPi(1000))


#---------------------------------------


# TEZ LICZY PI ALE INACZEJ

# from random import random
# from math import sqrt, pi, exp
# def fun1(x):
#     if x*x > 1: # 1 - x*x < 0
#         print("Domain error")
#     else:
#         return sqrt(1-x*x)
# def integral1(n):
#     i = 0
#     m = 0
#     while i < n:
#         x = random()
#         y = random()
#         if y <= fun1(x):
#             m = m + 1
#         i = i + 1
#     return m / n 
# n = fun1(0.43)
# print(n)
# print(integral1(n))


#---------------------------------------

#METODA ZAHCLANNA Z RESZTA

# def reszta(r):
#     t = [50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1]
#     kwota = r * 100
#     i = 0
#     nom = []
#     frq = []
#     while kwota > 0:
#         ile = kwota // t[i]
#         if ile > 0:
#             nom.append(t[i])
#             frq.append(ile)
#             kwota %= t[i] # pozostała kwota do wydania
#         i += 1
#     return list(zip(nom, frq))
# print(reszta(155555))