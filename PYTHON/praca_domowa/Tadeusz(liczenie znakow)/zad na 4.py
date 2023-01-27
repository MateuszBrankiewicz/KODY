# pantadeusz_bez_pl ma: 44284 bajtów - 3 bajty sa ukryte unicodem w pierwszym wierszu "ď»ż"
# pantadeusz_pl ma: 47496 bajtów - ma wiecej bajtow poniewaz ma polskie znaki
# pt_OK ma: 44281 bajtów


plik_we = open('C:\\Users\\Szef\\Desktop\\GIT\\KODY\PYTHON\\praca_domowa\\Tadeusz(liczenie znakow)\\pt_OK.txt', 'r')
dane = plik_we.read().split("\n")
plik_wy = open('pt_wyjscie.txt', 'w')


def zapisz_samogloski(samogloski):
    tekst = []
    nowe = ""
    
    for char, ilosc in samogloski.items():    
        tekst.append(str(char) + str("=") + str(ilosc))
    for e in tekst:
        nowe += e + " "
    samogloski.clear()
    
    return nowe


samogloski_lista = "aeiouy"
tablica = []
samogloski = {}
znaki = {}
i = 0
tekst = ""
wszystkie_znaki = ""


for linia in dane:
    for znak in linia:
        if znak.lower() in samogloski_lista:
            if znak.lower() in samogloski:
                samogloski[znak.lower()] += 1
            else:
                samogloski[znak.lower()] = 1
        if znak in znaki:
            znaki[znak] += 1
        else:
            znaki[znak] = 1
    i += 1
    tekst = str(i) + " " + str(linia) + "   " + str("Liczba samoglosek: ") + zapisz_samogloski(samogloski) + str("\n")
    plik_wy.write(tekst)
for znak, ilosc in znaki.items():
    wszystkie_znaki += str(znak) + str("=") + str(ilosc) + str(",\n")
plik_wy.write("Wszystkie znaki: \n" + wszystkie_znaki)
plik_wy.close()
plik_we.close()







