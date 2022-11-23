tab = []
n = 0
max1 = max2 = max3 = max4 = 0
# sprawdzenie czy tablica ma przynajmniej 4 elementy
while n < 4:
    n = int(input('Podaj wielkosc tablicy: '))

# przypisanie wartosci do tablicy
for element in range(n):
    a = int(input("Podaj wartosc: "))
    tab.append(a)

for item in range(0, len(tab)):
    if tab[item] > max1:
        max4 = max3
        max3 = max2
        max2 = max1
        max1 = tab[item]
        p1 = tab.index(tab[item])
    elif tab[item] > max2:
        max4 = max3
        max3 = max2
        max2 = tab[item]
        p2 = tab.index(tab[item])
    elif tab[item] > max3:
        max4 = max3
        max3 = tab[item]
    elif tab[item] > max4:
        max4 = tab[item]
s_max1 = max1 + max2 + max3
s_max2 = max1 + max2 + max4

print("Dwie najwieksze sumy wynosza: " + str(s_max1) + " i " + str(s_max2))
print("Dwa indeksy najwiekszych elementow wynosza: " + str(p1) + " i " + str(p2))
