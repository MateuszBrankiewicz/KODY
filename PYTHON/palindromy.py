plik_we = open("palindromy.txt", 'r')
dane = plik_we.readlines()
plik_wy = open('palindromy_wynik.txt', 'w')

zmienione = []
do_usuniecia = ["\n", "\t", " ", "-", ".", ",", "!", "_", "'", '"']

for e in range(len(dane)):
    for i in do_usuniecia:
        dane[e] = dane[e].replace(i, "")
    dane[e] = dane[e].lower()
    if dane[e] == dane[e][::-1]:
        tekst = str(e) + " " + dane[e] + " " + dane[e][::-1] + str(" - Jest palindromem!")
        plik_wy.write(tekst)
        plik_wy.write("\n")
    else:
        tekst = str(e) + " " + dane[e] + " " + dane[e][::-1] + str(" - Nie jest palindromem!")
        plik_wy.write(tekst)
        plik_wy.write("\n")
plik_wy.close()
plik_we.close()
