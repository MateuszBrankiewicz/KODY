plik_we = open("dane_6_2.txt", "r")
plik_wy = open("wynik_6_2.txt", "w")
dane = plik_we.readlines()

for i  in range (len(dane)):
    dane[i] = dane[i].replace("\n", "")
    dane[i] = dane[i].split(" ") 
print(dane)
for i in range (len(dane)):
    tekst = ""
    
    for znak in dane[i][0]:
        if dane[i][1] == '':
            continue
        else:        
            tekst += chr(((ord(znak) - 65 - int(dane[i][1])) % 26 + 65))  
            print(tekst)
        
    plik_wy.write(tekst)
    plik_wy.write("\n")

