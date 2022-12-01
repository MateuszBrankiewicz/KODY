from random import randint, seed
tab = []
zakres = 10000
seed(4)
tab = []
for i in range(0, zakres):
    tab.append(randint(0, zakres))
print(tab)
maksimum = maksimum1 = maksimum2 = 0
for i in range(len(tab)):
    if i > maksimum:
        maksimum2 = maksimum1
        maksimum1 = maksimum
        maksimum = tab[i]
    elif i > maksimum1:
        maksimum2 = maksimum1
        maksimum1 = tab[i]
    elif i > maksimum2:
        maksimum2 = tab[i]
print(maksimum, maksimum1, maksimum2)
srednia = 0
for j in range(len(tab)):
    srednia += tab[j]
print(srednia/j)
podzielne = []
for k in range(len(tab)):
    if tab[k] % 10 == 0 and tab[k] % 11 == 1:
        podzielne.append(tab[k])
print(podzielne)
