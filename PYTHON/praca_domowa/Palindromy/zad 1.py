plik = open('C:\\Users\\Szef\\Desktop\\pliki zaliczenia\\palindromy.txt', 'r')
dane = plik.readlines()
# print(dane)
plik2 = open('C:\\Users\\Szef\\Desktop\\pliki zaliczenia\\palindromy_wynik.txt', 'w')
for i in range(len(dane)):
    dane[i] = dane[i].replace('\n','')
    dane[i] = dane[i].replace(" ","")
    
    if dane[i] == dane[i][::-1]:
        plik2.write(dane[i])
        plik2.write('\n')
    else:
        pass
        
print(dane)

plik.close()
plik2.close()