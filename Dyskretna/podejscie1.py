# Program do odczytywania wiadomości zaszyfrowanej przez Alicję
#
# DANE:
# Klucz publiczny Bogumila: (ciag a_0, ... , a_n-1)
# Zaszyfrowana wiadomosci mi:
#
# SZUKANE:
# Wiadomość: m
# N i Q
# Ciag bn do rozszyfrowania wiadomosci
#
# Mniejsze bezpieczenstwo przez:
# 1 <= u_0 < (tutaj coś wpiszę) i u_0 < u_1 <= (tutaj też),
import random
from math import gcd

dane = open("wejscie.txt", "r")
tablica = dane.read().split()

def stworz_klucz_publiczny(dane):
    klucz_publiczny = []
    for x in dane[2:-2]:
        klucz_publiczny.append(int(x))
    return klucz_publiczny

    # def deszyfruj(u_dl, M):
#     b = []
#     wynik = 0
#     i = -1
#     dlugosc = 0
#     while dlugosc < u_dl:
#         if wynik + (u[i] * 1) <= M:
#             wynik += u[i] * 1
#             b.append(1)
#         else:
#             wynik += u[i] * 0
#             b.append(0)
#         dlugosc += 1
#         i -= 1
#     return b[::-1]


def check_private_key(public_key, q, n):
    private_key = []
    for i in range(len(public_key)):
        private_key.append(pow(public_key[i], -1, n) * q % n)
    return private_key






def rozszerzonyEuklides(a, b):
    if a == 0:
        return b, 0, 1
    nwd, x1, y1 = rozszerzonyEuklides(b % a, a)
    x = y1 - (b // a) * x1
    y = x1
    return nwd, x, y


# def znajdz_klucz(public_key, N, Q):
#     private_key = [0] * len(public_key)
#     for i in range(len(public_key)):
#         private_key[i] = (public_key[i] * pow(Q, -1, N)) % N
#     return private_key

def find_N_Q(a):
    # u_0 < u_1 <= U !!!!
    # N < 2^70
    # Q < N i NWD(Q,N) = 1
    # a_i = u_i * Q (mod N)
    # N > niz suma elementow ciagu (u)
    # dlugosc ciagu wyjsciowego u
    U = 20
    u = [0]*len(a)
    N_min = sum(u)
    N_max = 2 ** 70
    Q_min = 1
    u[1] = U
    u[0] = U - 1
    for N in range(N_min, N_max):
        for Q in range(Q_min, N):
            for j in range(1, U + 1):
                u[1] = j
                for k in range(1, j):
                    u[0] = k
                    for i in range(2, len(a)):
                        if (a[i] * pow(Q, -1, N)) % N == 1:
                            print("dziala")

                        print(N,Q,u)

    return None
    # u1 mniejsze rowne od ograniczenia U


    # while N < 2**10:
    #     for j in range(1, ogr+1):
    #         u[1] = j
    #         for k in range(1, j):
    #             u[0] = k
    #             if sum(u) >= N:
    #                 N = sum(u)+1
    #             if Q > N:
    #                 Q = N - 1
    #             if gcd(Q, N) != 1:
    #
    #                 break




public_key = [275, 9, 18, 169, 214, 20, 31, 337]
print(find_N_Q(public_key))
# private_key = znajdz_klucz(public_key, N, Q)
# print("Private Key:", private_key)
# print("N:", N)
# print("Q:", Q)

#   Przypisanie klucza publicznego z tablicy
klucz_publiczny = stworz_klucz_publiczny(tablica)
 # ciag (a)
find_N_Q(klucz_publiczny)
# k = tablica[-2] # 1
# m = tablica[-1] # 346
#
# Klucz publiczny
#
#
# # Dane dotyczące kodowania
# N = 115     # wieksze niz suma wyrazow ciagu (u)
# Q = 34      # mniejsze niz N i wzglednie pierwsze z N czyli NWD(Q,N) = 1
# # Obliczenie odwrotnego Q
# g, x, Q_1 = rozszerzonyEuklides(N, Q)











# Wyznaczenie ciagu (a) ze wzoru a_i = u_i * Q (mod N)
# a = []
# i = 0
# while i < len(u):
#     a.append(u[i]*Q % N)
#     i+=1

# Klucz prywatny Bogumila
# Ciag (u) oraz liczby N i Q

# Klucz publiczny Bogumila
# Ciag (a) wygenerowany z u_i*Q (mod N)

# Alicja, chcąc zaszyfrować wiadomość m = (b0, . . . , bn−1)
# składającą się z n bitów, wylicza sumę

# Szyfrowanie wiadomosci przez Alicje
# b = [0, 1, 0, 1, 1] # ciag (b) / wiadomosc Alicji
# # mi = b_0 * a_0 + . . . + b_n−1 * a_n−1
# i = 0
# mi = 0
# while i < len(b):
#     suma = b[i] * a[i]
#     mi += suma
#     i += 1

# Odszyfrowanie wiadomosci przez Bogumila
# # M = mi · Q_1 mod N
# M = (mi * Q_1) % N  # 70
#
# # M = b_0 * u_0 +. . . + b_4 * u_4
# # ciag (b)
# wiadomosc_bin = deszyfruj(len(u), M)
