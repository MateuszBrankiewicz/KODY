a = int(input('Wprowadz liczbe dziesietna:  '))
bin = ""
while a > 0:
    liczba = a % 2
    print(liczba)
    bin = str(liczba) + bin
    a = a // 2
print("\nbinarnie:", bin)
