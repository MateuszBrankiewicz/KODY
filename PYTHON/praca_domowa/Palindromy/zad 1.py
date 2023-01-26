plik = open('C:\\Users\\Szef\\Desktop\\GIT\\KODY\\PYTHON\\praca_domowa\\Palindromy\\palindromy.txt', 'r')
dane = plik.readlines()
# print(dane)
plik2 = open('C:\\Users\\Szef\\Desktop\\GIT\\KODY\\PYTHON\\praca_domowa\\Palindromy\\palindromy_wynik.txt', 'w')
usun = [" ",'-',',','_','!']
j = 0
stary =[]
for i in range(len(dane)):
    stary[i]= dane[i]
    tekst += stary[i]
    dane[i] = dane[i].replace('\n','')
    for j in range(len(usun)):
        dane[i] = dane[i].replace(usun[j],"")
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