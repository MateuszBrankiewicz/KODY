from random import randint, seed
from math import sqrt

seed(4)

for i in range(100):
    a = randint(0, 1000)
    b = randint(0, 1000)
    c = randint(0, 1000)
    if a > b:
        p = a
        a = b
        b = p
    if b > c:
        p = b
        b = c
        c = p
    if a > b:
        p = a
        a = b
        b = p
    if a + b > c:
        print("Jest trojkatem")
        p = (a+b+c)/2
        pole = sqrt(p*(p-a)*(p-b)*(p-c))
        print(pole)
        if (a*a) + (b*b) < (c*c):
            print("Trojkat ostrokatny")
        elif (a*a) + (b*b) > (c*c):
            print("Trojkat rozwartokatny")
        else:
            print("Trojkat prostokatny")
         
    else:
        print("nie jest trojkatem")
   