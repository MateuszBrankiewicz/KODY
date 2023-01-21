plik = open('C:\\Users\\Szef\\Desktop\\GIT\\KODY\PYTHON\\praca_domowa\\Tadeusz(liczenie znakow)\\pt_OK.txt', 'r')
dane = plik.readlines()

liczba_liter = {}
for linia in dane:
    letter = 0
    for litera in linia:
        if litera in liczba_liter:
            liczba_liter[litera] += 1
        else:
            liczba_liter[litera] = 1
print(liczba_liter)


        
# print(dane.count("a"))
plik.close()
