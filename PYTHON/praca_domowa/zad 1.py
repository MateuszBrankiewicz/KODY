plik = open('C:\\Users\\Szef\\Desktop\\pliki zaliczenia\\palindromy.txt', 'r')
dane = plik.readlines()
print(dane)
for i in range(len(dane)):
    dane[i] = dane[i].replace(" ","")
print(dane)
plik.close()