from random import randint, seed
def podzielnia(tab):
    podzielne = []
    for i in range(0, len(tab)):
        if tab[i] % 10 == 0 and tab[i] % 11 == 0:
            podzielne.append(tab[i])
    print(podzielne)
def srednia(tab):
    srednia = 0
    i
    for j in range(len(tab)):
        srednia += tab[j]
    wynik = srednia / j
    print(wynik)


seed(4)
tab = []
zakres = 10
for i in range(0, zakres):
    tab.append(randint(0, 10000))
print(tab)
srednia(tab)
podzielnia(tab)