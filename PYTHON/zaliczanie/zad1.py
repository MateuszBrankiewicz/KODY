plik = text_file = open("C:\\Users\\Szef\\Desktop\\trojki_plik.txt", "r")
t = []
for line in plik:
    print(line)
    for j in range(4):
        if j == 0 or j == 2 or j==4:
            t.append(line[j])

ilosc = len(t)
suma = 0
for i in range(ilosc):
   suma += int(t[i])
   
print(suma)    
plik.close