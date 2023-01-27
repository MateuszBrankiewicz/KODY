plik_we = open("dane_6_3.txt", "r")
plik_wy = open("wynik_6_3.txt", "w")
dane = plik_we.readlines()

for i  in range (len(dane)):
    dane[i] = dane[i].replace("\n", "")
    dane[i] = dane[i].split(" ") 
for i in range (len(dane)):
    dobrze = False
    for k in range(0,26):
        tekst = ''
        for znak in (dane[i][0]):
            tekst += chr((ord(znak) - 65 + k) % 26 + 65)
            if tekst == dane[i][1]:
                dobrze = True
    if dobrze == False:
        plik_wy.write(dane[i][0])
        plik_wy.write("\n")
plik_wy.close()
plik_we.close()