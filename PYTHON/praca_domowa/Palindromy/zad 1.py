plik = open('C:\\Users\\Szef\\Desktop\\GIT\\KODY\\PYTHON\\praca_domowa\\Palindromy\\palindromy.txt', 'r')
dane = plik.readlines()
# print(dane)
plik2 = open('C:\\Users\\Szef\\Desktop\\GIT\\KODY\\PYTHON\\praca_domowa\\Palindromy\\palindromy_wynik.txt', 'w')
for i in range(len(dane)):
    dane[i] = dane[i].replace('\n','')
    dane[i] = dane[i].replace(" ","")
    dane[i] = dane[i].replace('-',"")
    dane[i] = dane[i].replace(',',"")
    dane[i] = dane[i].replace('_',"")
    dane[i] = dane[i].replace('!',"")
    dane[i] = dane[i].lower()
    if dane[i] == dane[i][::-1]:
        tekst = str(i) + " " + dane[i] + " "+ dane[i][::-1] + str(" Jest palindromem")
        plik2.write(tekst)
        plik2.write('\n')
    else:
        tekst = str(i)+" " + dane[i]+" " + dane[i][::-1]
        plik2.write(tekst)
        plik2.write('\n')
        


plik.close()
plik2.close()