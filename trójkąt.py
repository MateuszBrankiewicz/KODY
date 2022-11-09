from math import sqrt
a = int(input("wprowadz a"))
b = int(input("wprowadz b"))
c = int(input("wprowadz c"))

if a > b and a > c:
    if b + c > a:
        p = (a + b + c) / 2
        Pole = sqrt(p * (p - a) * (p - b) * (p - c))
        if (c*c) + (b*b) == (a*a):
            print(Pole, "Trójkąt prostokątny")
        elif (c*c) + (b*b) > (a*a):
            print(Pole, "Trójkąt ostrokątny")
        else:
            print(Pole, "Trójkąt rozwartokątny")
elif b > a and b > c:
    if a + c > b:
        p = (a + b + c) / 2
        Pole = sqrt(p * (p - a) * (p - b) * (p - c))
        if (c*c) + (a*a) == (b*b):
            print(Pole, "Trójkąt prostokątny")
        elif (c*c) + (a*a) > (b*b):
            print(Pole, "Trójkąt prostokątny")
        else:
            print(Pole, "Trójkąt rozwartokątny")
elif c > a and c > b:
    if b + a > c:
        p = (a + b + c) / 2
        Pole = sqrt(p * (p - a) * (p - b) * (p - c))
        if (a*a) + (b*b) == (c*c):
            print(Pole, "Trójkąt prostokątny")
        elif (a*a) + (b*b) > (c*c):
            print(Pole, "Trójkąt prostokątny")
        else:
            print(Pole, "Trójkąt rozwartokątny")







