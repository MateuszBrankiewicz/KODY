 # pantadeusz_bez_pl ma: 44284 bajtów ``` 3 bajty sa ukryte unicodem w pierwszym wierszu "ď»ż"```
# pantadeusz_pl ma: 47496 bajtów ``` ma wiecej bajtow poniewaz ma polskie znaki```
# pt_OK ma: 44281 bajtów

plik=open("C:/Users/eweli/OneDrive/Pulpit/pt_OK.txt","r")
plik2=open("C:/Users/eweli/OneDrive/Pulpit/pt_wyniki.txt","w")
tekst=plik.readlines
a=tekst()

for i in range(len(a)):
    samogloski=a[i].count('a')+a[i].count('A')+a[i].count('e')+a[i].count('E')+a[i].count('i')+a[i].count('I')+a[i].count('o')+a[i].count('O')+a[i].count('u')+a[i].count('U')+a[i].count('Y')+a[i].count('y')
    plik2.write('Wiersz:'+str(i+1)+" " +'Liczba samogłosek:'+str(samogloski)+" "+str(a[i]))

plik2.write("\n")
a=str(a)
a=a.lower()

for i in range(97,123):
   plik2.write(chr(i)+" "+str(a.count(chr(i)))+"\n")
plik2.write('?'+" "+str(a.count('?'))+"\n")
plik2.write('.'+" "+str(a.count('.'))+"\n")
plik2.write(','+" "+str(a.count(','))+"\n")
plik2.write('!'+" "+str(a.count('!'))+"\n")
plik2.write(':'+" "+str(a.count(':'))+"\n")
plik2.write(';'+" "+str(a.count(';'))+"\n")
plik2.write('-'+" "+str(a.count('-'))+"\n")
plik2.write('('+" "+str(a.count('('))+"\n")
plik2.write(')'+" "+str(a.count(')'))+"\n")
plik2.write(str(chr(34))+" "+str(a.count(chr(34))))
plik.close()
plik2.close()