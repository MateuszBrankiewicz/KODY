plik = open('C:\\Users\\Szef\\Desktop\\trojki_plik.txt','r')
dane = plik.readlines()
plik.close()
print(type(dane))
print(len(dane))
 
print(dane)
 
for i in range(len(dane)):
    dane[i] = dane[i].replace('\n','')
print(dane)
 
for i in range(len(dane)):
    dane[i] = dane[i].split(' ')
print(dane)
 
for i in range(len(dane)):
    for j in range(3):
        dane[i][j] = int(dane[i][j])
print(dane)
 
for i in range(len(dane)):
    x = dane[i][0]
    y = dane[i][1]
    z = dane[i][2]
    print(i,dane[i],x+y+z)