binarne = "binarne"
dziesietne = "dziesietne"

typ = input('wprowadz typ konwersji binarne/dziesietne')
if typ == binarne:
    a = int(input('Wprowadz liczbe dziesietna '))
    bin = ""
    while a > 0:
        liczba = a % 2
        print(liczba, end=" ")
        bin = str(liczba) + bin
        a = a // 2
    print("\nbinarnie:", bin)
elif typ == dziesietne:
    def binToDec(x):

        if x == 1 or x == 0:
            return x
        elif x != 0 and x != 1:
            print('Podaj poprawną liczbę binarną złożoną z 0 i 1 ')

        l = len(str(x))
        firstDigit = x // pow(10, l - 1)

        return (pow(2, l - 1) * firstDigit) + binToDec(x % pow(10, l - 1))


    binarna = int(input('Wprowadź liczbę binarną: '))
    decymalna = binToDec(binarna)

    print("Liczbą dziesiętną z {p} jest {q} ".format(p=binarna, q=decymalna))

else:
    print('Wybierz poprawny typ konwerji')