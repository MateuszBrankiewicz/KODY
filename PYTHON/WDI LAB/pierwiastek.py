n = int(input("Podaj liczbe ktorej pierwiastek chcesz znalezc"))
stop = n
start = 0


licz = 0
for i in range(55):
    srodek = (start + stop)/2
    if srodek*srodek > n:
        stop = srodek
        licz += 1
    else:
        start = srodek
        licz +=1
    print(i, start, stop, srodek, n**0.5 - srodek)