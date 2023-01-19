from math import sin, pi
n = int(input("Liczba trapezów: "))
suma = 0
h = pi/n
for i in range(n):
    a = i*h
    b = a+h
    ax = sin(a)
    bx = sin(b)
    pole = ((ax+bx)*h)/2
    suma += pole
print(suma)
