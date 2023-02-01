plik_we = open("dane_6_1.txt", "r")
plik_wy = open("wynik_6_1.txt", "w")
dane = plik_we.readlines()

for i in range(len(dane)):
    tekst = ""    
    for znak in dane[i]:
        if znak.isupper():
            tekst += chr((ord(znak) - 65 + 107) % 26 + 65)
        elif znak.islower():
            tekst += chr((ord(znak) - 97 + 107) % 26 + 97)
        elif znak.isdigit():
            tekst += chr((ord(znak) - 48 + 107) % 10 + 48)
        else:
            tekst += znak
    plik_wy.write(tekst)
    plik_wy.write("\n")
plik_we.close()
plik_wy.close()
