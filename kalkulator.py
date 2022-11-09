wynik = 0
operacja = True
while operacja == True:
    operacja = int(input('Podaj operacje (0 - wyjscie, 1 [+], 2 [-], 3 [*], 4 [/], 5[^]): '))
    if operacja == 0:
        operacja = False
    if operacja == 1:
        a = int(input('Podaj wartość do dodania:'))
        wynik += a
    if operacja == 2:
        a = int(input('Podaj wartość do odjecia:'))
        wynik -= a
    if operacja == 3:
        a = int(input('Podaj wartość do pomnozenia:'))
        wynik *= a
    if operacja == 4:
        a = int(input('Podaj wartość do dzielenia:'))
        wynik /= a
    if operacja == 5:
        a = int(input('Podaj wartość do spotęgowania:'))
        wynik = wynik + (a*a)
print(wynik, "Dziekujemy za skorzystanie z kalkulatora")



