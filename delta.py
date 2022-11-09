import math

print('delta')
a = int(input("Podaj wspolczynnik a"))
b = int(input("Podaj wspolczynnik b"))
c = int(input("Podaj wspolczynnik c"))
delta = (b*b) - 4 * a * c
if a == 0 and b != 0 and c != 0 :
    x = -b/c
    print(x)
elif a == 0 and b == 0 and c== 0:
    print('tożsamość')
elif a == 0 and c== 0:
    print('Sprzeczne')
if delta < 0 and a != 0:
    print("Brak pierwiastków")
elif delta == 0 and a != 0:
    x = -b // 2 * a
    print(x)
if delta > 0 and a != 0:
    x1 = (-b - math.sqrt(delta)) / (2 * a)
    x2 = (-b + math.sqrt(delta)) / (2 * a)
    print("Pierwiastkami tego rownania są: \n x1=" + str(round(x1, 2)) + " " + 'x2=' + str(round(x2, 2)))




