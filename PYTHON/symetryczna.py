tab = []
rowne_zero = False
symetryczna = False
i = 0
print("Aby zakonczyc wpisz '0'")
while not rowne_zero:
    n = int(input("Podaj wartosc: "))
    if n == 0:
        rowne_zero = True
    else:
        tab.append(n)
if len(tab) % 2 == 1:
    while i < len(tab):
        if tab[i] == tab[len(tab)-1-i]:
            symetryczna = True
        else:
            symetryczna = False
        i += 1
else:
    while i < len(tab):
        if tab[0+i] == tab[-1-i]:
            symetryczna = True
        else:
            symetryczna = False
        i += 1
if symetryczna:
    print("Tablica jest symetryczna")
    print(tab)
else:
    print("Tablica nie jest symetryczna")
    print(tab)
