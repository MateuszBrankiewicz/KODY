import sys
from random import randint, seed
def maksimum(tab):
    maksimum = maksimum1 = maksimum2 = 0
    for i in range(len(tab)):
        if maksimum < tab[i]:
            maksimum2 = maksimum1
            maksimum1 = maksimum
            maksimum = tab[i]
        elif maksimum1 < tab[i]:
            maksimum2 = maksimum1
            maksimum1 = tab[i]
        elif maksimum2 < tab[i]:
            maksimum2 = tab[i]

    print(maksimum, maksimum1, maksimum2)
def minimalne(tab):
    minimum = minimum1 = minimum2 = sys.maxsize
    for j in range(len(tab)):
        if minimum > tab[j]:
            minimum2 = minimum1
            minimum1 = minimum
            minimum = tab[j]
        elif minimum1 > tab[j]:
            minimum2 = minimum1
            minimum1 = minimum
            minimum = tab[j]
        elif minimum2 > tab[j]:
            minimum2 = tab[j]
    print(minimum, minimum1, minimum2)


seed(99504)

tab = []
for i in range(10):
    tab.append(randint(0, 500))
print(tab)
minimalne(tab)
maksimum(tab)